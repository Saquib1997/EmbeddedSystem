#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t id;
    printf("Before Forking\n");
    id = fork();
    //printf("After Forking : %d\n",id);
    if( id==0 )
    {
        printf("Child Process PID %d\n",getpid());    //This is the Child ID 
        printf("Child Process PPID %d\n",getppid());
        wait();
    }
    else
    {
        printf("Parent Process PID %d\n",getpid());   //This PID is the Parent ID
        printf("Parent Process PPID %d\n",getppid()); //This PPID is the Grandparent ID
        wait();
    }
    return 0;
}