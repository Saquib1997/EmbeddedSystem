#include<stdio.h>
void SetBit(int set,int setBit)
{
    set|=(1<<setBit);
    printf("The Modified number with set bit is: %d\n",set);
}
void ClearBit(int clear,int clearBit)
{
    clear&=~(1<<clearBit);
    printf("The Modified number with set bit is: %d\n",clear);
}
int main()
{
    int set,clear,setnib,clearnib,setBit,clearBit,setNib,clearNib;
    printf("Enter the number and bit of it to be set:\n");
    scanf("%d%d",&set,&setBit);
    SetBit(set,setBit);
    printf("Enter the number and bit of it to be clear:\n");
    scanf("%d%d",&clear,&clearBit);
    ClearBit(clear,clearBit);
    return 0;
}
