#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    int fd;
    fd=open("desdfifo", O_WRONLY);
    write(fd, "SAQUIB\n",7);
    close(fd);
    return 0;
}