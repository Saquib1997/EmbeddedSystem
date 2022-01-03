#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    char buffer;
    int fdr,fdw;
    fdr=open("src.txt", O_RDONLY);
    fdw=open("dest.txt", O_WRONLY|O_CREAT, S_IRUSR| S_IWUSR|S_IRGRP|S_IROTH);
    if(fdr==-1)
    {
     printf("Error: Source File not found!\n");
     exit(EXIT_FAILURE);
    }
    while(read(fdr,&buffer,sizeof(buffer)))
    {
        write(fdw,&buffer,sizeof(buffer));
    }
    printf("Copied!!!\n");
    close(fdr);
    close(fdw);
    return 0;
}