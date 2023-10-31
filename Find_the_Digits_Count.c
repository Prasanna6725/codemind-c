#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        c=c+1;
    }
    printf("%d",c);
}