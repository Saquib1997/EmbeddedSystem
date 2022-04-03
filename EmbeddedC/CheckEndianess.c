#include <stdio.h>
int main()
{
 int a=1;
  char *ptr=(char *)&a;
  if(*ptr==1)
  {
   printf("Little Endian\n");
  }
  else
  {
   printf("Big Endian\n"); 
  }
  return 0; 
}
