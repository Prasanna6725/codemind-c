#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c)
    {
        printf("%d",a+b);
    }
    else if(a>b && c>b)
    {
        printf("%d",a+c);
    }
    else if(b>a && a>c)
    {
        printf("%d",b+a);
    }
    else if(b>a && c>a)
    {
        printf("%d",b+c);
    }
    else if(c>a && a>b)
    {
        printf("%d",c+a);
    }
    else if(c>a && b>a)
    {
        printf("%d",c+b);
    }
}