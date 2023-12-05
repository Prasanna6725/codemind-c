#include<stdio.h>
int main()
{
    int l,b,w,c,fl,fb,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    fl=l-(2*w);
    fb=b-(2*w);
    a=(l*b)-(fl*fb);
    a*=c;
    if(fl<=0 || fb<=0)
    printf("Impossible");
    else
    printf("%d",a);
}