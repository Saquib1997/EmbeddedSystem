#include<stdio.h>
int prime(int a);
int main()
{
    int a=0,result=0;
    printf("Enter a number\n");
    scanf("%d\n",&a);
    result = prime(a);
    if(result==2)
    printf("%d is a prime number\n",a);
    else
    printf("%d is not a prime number\n",a);
    return 0;
}           
