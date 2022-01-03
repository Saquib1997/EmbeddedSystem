#include <stdio.h>
#include <pthread.h>
void *hello_thread(void *arg)
{
    printf("Hello Thread\n");
}
int main()
{
    pthread_t helloID;
    printf("Main Thread: Before creating Hello Thread\n");
    pthread_create(&helloID, NULL, hello_thread, NULL);
    pthread_join(helloID, NULL);
    printf("Main Thread: After creating Hello Thread\n");
    return 0;
}