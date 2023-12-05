#include<stdio.h>
int main()
{
    int a,b,l,w,c,fl,fb;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    fb=2*w+b;
    fl=2*w+l;
    a=(fb*fl)-(b*l);
    a*=c;
    printf("%d",a);
}