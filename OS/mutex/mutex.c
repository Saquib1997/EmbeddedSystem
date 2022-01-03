#include <stdio.h>
#include <pthread.h>
int count=10;
pthread_mutex_t mutexCount;
void *inc_thread(void*arg)
{
    while(1)
    {
    //Lock
    pthread_mutex_lock(&mutexCount);
    count++;
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
    pthread_mutex_init(&mutexCount, NULL);
    pthread_create(&incID, NULL, inc_thread, NULL);
    pthread_create(&decID, NULL, dec_thread, NULL);
    pthread_join(incID, NULL);
    pthread_join(decID, NULL);
    pthread_mutex_destroy(&mutexCount);
    return 0;
}