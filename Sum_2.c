#include<stdio.h>
int main()
{
    int a,c=0,i,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
    {
        c=c+i;
    }
    }
    printf("%d ",c);
}