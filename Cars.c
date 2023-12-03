#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("%d",n/4);
    }
    else if((n+1)%4==0)
    {
        printf("%d",(n/4)+1);
    }
    else if((n+2)%4==0)
    {
        printf("%d",(n/4)+1);
    }
    else if((n+3)%4==0)
    {
        printf("%d",(n/4)+1);
    }
    else if((n-1)%4==0)
    {
        printf("%d",(n/4)+1);
    }
    else if((n-2)%4)
    {
        printf("%d",(n/4)+1);
    }
    else if((n-3)%4)
    {
        printf("%d",(n/4)+1);
    }
}