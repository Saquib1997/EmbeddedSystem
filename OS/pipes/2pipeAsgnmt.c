#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
int main()
{
    char buff1[100],buff2[100];
    int fd1[2],fd2[2],a,b;
    pid_t id;
    id=fork();
    pipe(fd1);
    pipe(fd2);
    if(id==0)
    {
        close(fd1[0]);
        close(fd2[1]);
        write(fd1[1],"DESD\n",5);
        read(fd2[0],buff1,100);
        //write(1,buff1,a);
        printf("Child read data from Parent %s\n",buff1);
        wait();
    }
    else
    {
        close(fd1[1]);
        close(fd2[0]);
        read(fd1[0],buff2,100);
        printf("Parent read data from Child %s\n",buff2);
        //write(1,buff2,b);
        write(fd2[1],"DESD\n",5);
        wait();
    }
    return 0;
}