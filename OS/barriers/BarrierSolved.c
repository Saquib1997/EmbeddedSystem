#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

pthread_barrier_t init_barrier;
  
void i2c_thread(void)
{
   while(1){
   printf("i2c process started\n");
   sleep(2);
   pthread_barrier_wait(&init_barrier);
   printf("i2c process completed\n");
    }
}

void ethernet_thread(void)
{
   while(1){
   printf("ethernet process started\n");
   sleep(6);
   pthread_barrier_wait(&init_barrier);
   printf("ethernet process completed\n");
    }
}

void uart_thread(void)
{
   while(1){
   printf("uart process started\n");
   sleep(3);
   pthread_barrier_wait(&init_barrier);
   printf("uart process completed\n");
    }
}

void eeprom_thread(void)
{
   while(1){
   printf("eeprom process started\n");
   sleep(3);
   pthread_barrier_wait(&init_barrier);
   printf("eeprom process completed\n");
    }
}

int main()
{
    pthread_t i2c, ethernet, uart, eeprom;

    pthread_barrier_init(&init_barrier, NULL, 4); //Always create barrier before creating the threads

    pthread_create(&i2c, NULL, i2c_thread, NULL);
    pthread_create(&ethernet, NULL, ethernet_thread, NULL);
    pthread_create(&uart, NULL, uart_thread, NULL);
    pthread_create(&eeprom, NULL, eeprom_thread, NULL);
    pthread_join(i2c, NULL);
    pthread_join(ethernet, NULL);
    pthread_join(uart, NULL);
    pthread_join(eeprom, NULL);
    return 0;
}