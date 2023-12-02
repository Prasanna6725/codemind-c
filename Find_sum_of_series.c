#include<stdio.h>
int main()
{
    int n;
    float s=0,k,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1/i;
        s=s+k;
    }
    printf("%.2f",s);
}