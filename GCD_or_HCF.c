#include<stdio.h>
int main()
{
    int g,a,b,m,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=a*i;
        if(m%b==0)
        {
            break;
        }
    }
    g=(a*b)/m;
    printf("%d",g);
}