#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    unsigned char buff[16];
    pid_t id;
    int fd[2];
    pipe(fd);

    //fd[0] => For reading data (OUT) from pipe.
    //fd[1] => For writing data (IN) from pipe.

    id = fork();
    if(0 == id)
    {
        close(fd[1]);
        printf("Child: Reading data\n");
        read(fd[0], buff, 16);
        printf("Child data is %s\n",buff);
        wait();
    }
    else
    {
        close(fd[0]);
        printf("Parent: Writing data\n");
        write(fd[1],"SAQUIB",6);
        wait();
    }
    return 0;
}