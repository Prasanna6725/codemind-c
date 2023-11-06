#include<stdio.h>
int main()
{
    int r,n,p=1,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        c=c+r;
        p=p*r;
    }
    if(c==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}