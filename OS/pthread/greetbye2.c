#include <stdio.h>
#include <pthread.h>
void *greet_thread(void*arg)
{
    printf("%s from Thread\n",arg);
}
int main()
{
    pthread_t helloID,byeID;
    printf("Main Thread: Before creating Hello and Bye Thread\n");
    pthread_create(&helloID, NULL, greet_thread, "Hello");
    pthread_join(helloID, NULL);
    printf("Main Thread: After creating Hello Thread and Before creating Bye Thread\n");
    pthread_create(&byeID, NULL, greet_thread, "Bye");
    pthread_join(byeID, NULL);
    printf("Main Thread: After creating Hello and Bye Thread\n");
    return 0;
}