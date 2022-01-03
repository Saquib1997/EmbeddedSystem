#include <stdio.h>
#include <pthread.h>
int count=10;
pthread_mutex_t mutexCount;
pthread_mutexattr_t mutexCountattr;
void square()
{
    pthread_mutex_lock(&mutexCount); //Waiting (goes into DEADLOCK situation)
    count = count*count;
    pthread_mutex_unlock(&mutexCount);
}
void *inc_thread(void*arg)
{
    while(1)
    {
    //Lock
    pthread_mutex_lock(&mutexCount);
    count++;
    square();  //Deadlock call situation 
    printf("IncThread: %d\n",count);
    pthread_mutex_unlock(&mutexCount);
    //Unlock
    }
}
void *dec_thread(void*arg)
{
    while(1)
    {
    //Lock 
    pthread_mutex_lock(&mutexCount);
    count--;
    printf("DecThread: %d\n",count);
    pthread_mutex_unlock(&mutexCount);
    //Unlock
    }
}
int main()
{
    pthread_t incID,decID;
    pthread_mutexattr_init(&mutexCountattr);
    pthread_mutexattr_settype(&mutexCountattr,PTHREAD_MUTEX_RECURSIVE_NP);
    pthread_mutex_init(&mutexCount, &mutexCountattr);
    pthread_create(&incID, NULL, inc_thread, NULL);
    pthread_create(&decID, NULL, dec_thread, NULL);
    pthread_join(incID, NULL);
    pthread_join(decID, NULL);
    pthread_mutex_destroy(&mutexCount);
    return 0;
}