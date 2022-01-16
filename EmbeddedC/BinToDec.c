#include<stdio.h>

int main()
{
int n, a, rem, sum=0, base=1;
printf("Enter the Binary number to convert it into Decimal: ");
scanf("%d",&n);
a = n;
while(a>0)
{
rem = a%10;
sum = sum + (rem*base);
base = base*2;
a = a/10;
}
printf("The Decimal equivalent of %d is: %d\n",n, sum);
return 0;
}
