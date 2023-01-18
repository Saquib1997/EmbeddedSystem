#include <stdio.h>

int main()
{
    int i,j,k;
    char arr[20],ch;
    printf("Enter the String to be Manipulated:\n");
    fgets(arr, sizeof(arr), stdin);
    for(i=0;arr[i]!='\0';i++)
    {
        ch=arr[i];
        for(j=i+1;arr[j]!='\0';j++)
        {
            if(arr[j]==ch)
            {
                for(k=j;arr[k+1]!='\0';k++)
                arr[k]=arr[k+1];
                arr[k]='\0';
            }
        }
    } 
    /*int len = strlen(arr);
    for (i = 0, j = 1; j < len; j++) {
        if (arr[j] != arr[i]) {
            arr[++i] = arr[j];
        }
    }
    arr[i+1] = '\0'; */
    puts(arr);
    return 0;
}