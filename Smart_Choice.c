#include<stdio.h>
int main()
{
    int a,b,d,e,g,h,i,m,x,y;
    scanf("%d%d",&x,&y);
    a=500;
    b=1000;
    g=b-y*4;
    h=a-(x+y)*2;
    i=g+h;
    d=a-x*2;
    e=b-(x+y)*4;
    m=d+e;
    if(i>m)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",m);
    }
}