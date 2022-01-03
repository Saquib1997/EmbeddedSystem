#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
    int fd;
    //fd=open("desd.txt",O_WRONLY);            //This will open the desd.txt file only if its present.
    //Belolw one will open the desd.txt file if it is present, if its not present it will create and then open it.
    fd=open("desd.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR); //Also this an 3 argument open function "MODE ARGUMENT in the END"  
    if (fd==-1)
    {
      //Use this  
      //printf("Error Occured: while opening file = %d\n",errno);
                         //OR
      //Use this for more easyway  
        perror("Error Occured: while opening file = \n");
        exit(EXIT_FAILURE);
    }
    printf("File descriptor for desd.txt is : %d\n",fd); //fd here is a FIle Descriptor.
    write(fd,"SAQUIB",6);
    close(fd);
    return 0;
}