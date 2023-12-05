#include<stdio.h>
int main()
{
    int f=0,s=1,t,i,n;
    scanf("%d",&n);
    printf("%d %d ",f,s);
    for(i=3;i<=n;i++)
    {
        t=f+s;
        f=s;
        s=t;
        printf("%d ",t);
    }
}