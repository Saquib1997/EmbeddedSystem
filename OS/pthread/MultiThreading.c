//Create four seperate threads to perform four different tasks.
#include <stdio.h>
#include <pthread.h>
int x=4,y=6,z=8,a=3,b=9,c=2,d=12,e=10,sum1=0,sum2=0,sum3=0,sum4=0;
void *Thread1()
{
 sum1=x+y;
}
void *Thread2()
{
 sum2=z+a;
}
void *Thread3()
{
 sum3=b+c;
}
void *Thread4()
{
 sum4=d+e;
}
int main()
{
    pthread_t thread1, thread2, thread3, thread4;
    printf("Main thread before creating any thread\n");
    pthread_create(&thread1, NULL, Thread1, NULL);
    pthread_join(thread1, NULL);
    printf("After creating Thread 1\n");
    printf("Sum 1: %d\n",sum1);
    pthread_create(&thread2, NULL, Thread2, NULL);
    pthread_join(thread2, NULL);
    printf("After creating Thread 2\n");
    printf("Sum 2: %d\n",sum2);
    pthread_create(&thread3, NULL, Thread3, NULL);
    pthread_join(thread3, NULL);
    printf("After creating Thread 3\n");
    printf("Sum 3: %d\n",sum3);
    pthread_create(&thread4, NULL, Thread4, NULL);
    pthread_join(thread4, NULL);
    printf("After creating Thread 4\n");
    printf("Sum 4: %d\n",sum4);
    return 0;
}