#include<stdio.h>
int main()
{
    int n,r,c=0,s;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        r=s%10;
        s=s/10;
        c=c+r; 
    }
    if(c==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}