// Write a program to Reverse the Entered String in the same array and print it?
#include <stdio.h>
void reverse(char *start, char *end)
{
    char ch;
    while(start<end)
    {
    ch=*start;
    *start=*end;
    *end=ch;
    start++;
    end--;
    }
}
int main()
{
    char ptr[20]={0},ch,*start=NULL,*end=NULL;
    int i;
    printf("Enter the string\n");
    scanf("%s",ptr);
    start = ptr;
    end = ptr;
    for(i=0;ptr[i+1]!='\0';i++)
    {
        end++;
    }
    reverse(start,end);
    /*while(start<end)
    {
        ch=*start;
        *start=*end;
        *end=ch;
        start++;
        end--;
    }*/
    printf("The Reversed String is:'%s'\n",ptr);
    /*for(i=0 ; ptr[i] != '\0' ; i++)
    {
        printf("%c",ptr[i]);
    }*/
    return 0;
}