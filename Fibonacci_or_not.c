#include<stdio.h>
int main()
{
    int f=0,s=1,t,i,n,flag=0;
    scanf("%d",&n);
    t=f+s;
    while(t<=n)
    {
        if(t==n)
        {
            flag=1;
            break;
        }
        f=s;
        s=t;
        t=f+s;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    printf("False");
}