int prime(int a)
{
    int i,flag=0;
    for(i=0;i<=a;i++)
    {
        if(a%i==0)
        flag+=1;
    }
    return flag;
}
