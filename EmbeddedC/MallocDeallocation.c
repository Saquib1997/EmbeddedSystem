#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p1, *p2;
    p1 = (int *)malloc(sizeof(int)*2);
    p1[0]=1;
    p1[1]=2;
    printf("p1[0] = %d......p1[1] = %d\n",p1[0],p1[1]);
    free(p1);
    printf("p1[0] = %d......p1[1] = %d\n",p1[0],p1[1]);
    printf("p1[0] = %d......p1[1] = %d\n",*p1,*(p1+1));
    p2 = (int *)malloc(sizeof(int)*2);
    p2[0]=6;
    p2[1]=7;
    printf("p2[0] = %d......p2[1] = %d\n",p2[0],p2[1]);
    printf("p1[0] = %d......p1[1] = %d\n",p1[0],p1[1]);
    free(p2);
    printf("p2[0] = %d......p2[1] = %d\n",p2[0],p2[1]);
    printf("p1[0] = %d......p1[1] = %d\n",p1[0],p1[1]);
    return 0;
}