#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t id;
    printf("Before Fork\n"); //Printed Once because it is before fork
    id = fork();
    printf("After Fork\n"); //Printed Twice because it is after fork
    if(id == 0)
    {
        printf("Child: Before Exec\n");
        execl("/home/codeblind/EOS/pids/piddemo","/home/codeblind/EOS/pids/piddemo",NULL);
        printf("Child: After Exec\n"); //This will not be executed because exec has loaded another process in the address space of child.
    }
    else
    {
        printf("Parent\n");
        wait();
    }
    printf("Program Exited\n"); //This will be printed once because it is after exec and only parent will execute it not child.
    return 0;
}
