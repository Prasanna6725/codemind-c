#include<stdio.h>
int main()
{
    int n,k,t,m,p;
    scanf("%d%d%d",&n,&k,&m);
    t=k*m;
    if(n%t==0)
    {
        printf("%d",(n/t));
    }
    else if((n+1)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n+2)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n+3)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n+4)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n+5)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n-1)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n-2)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n-3)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n-4)%t==0)
    {
        printf("%d",(n/t)+1);
    }
    else if((n-5)%t==0)
    {
        printf("%d",(n/t)+1);
    }
}