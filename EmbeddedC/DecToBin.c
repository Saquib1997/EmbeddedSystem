#include<stdio.h>

int main()
    {
        int i, x, a, n, bin[32];
        printf("Enter a Decimal number to finds its Binary equivalent\n");
        scanf("%d",&n);
        a = n;
        i = 0;
        while(a != 0)
        {
            bin[i]=a%2;
            i++;
            a=a/2;
        }
        printf("The Binary equivalent of the number %d is: ",n);
        for (i-1; i>=0; i--)
        {
            printf("%d",bin[i]);
        }
        printf("\n");
        return 0;
    }
