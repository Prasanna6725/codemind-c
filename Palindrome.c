#include<stdio.h>
int main()
{
    int n,r,t,v=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        v=v*10+r;
    }
    if(v==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}