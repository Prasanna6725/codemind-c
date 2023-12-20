#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    float s=0,avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    int c=0;
    avg=s/n;
    for(i=0;i<=n;i++)
    {
        if(avg<a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}