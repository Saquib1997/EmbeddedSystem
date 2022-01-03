#include <stdio.h>
#include <pthread.h>
void *hello_thread(void *arg)
{
    printf("Hello from Thread\n");
}
void *bye_thread(void*arg)
{
    printf("Bye from Thread\n");
}
int main()
{
    pthread_t helloID,byeID;
    printf("Main Thread: Before creating Hello and Bye Thread\n");
    pthread_create(&helloID, NULL, hello_thread, NULL);
    pthread_join(helloID, NULL);
    printf("Main Thread: After creating Hello Thread and Before creating Bye Thread\n");
    pthread_create(&byeID, NULL, bye_thread, NULL);
    pthread_join(byeID, NULL);
    printf("Main Thread: After creating Hello and Bye Thread\n");
    return 0;
}