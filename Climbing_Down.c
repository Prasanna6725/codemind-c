#include<stdio.h>
int main()
{
    float a,b,x,y;
    scanf("%f%f%f%f",&a,&b,&x,&y);
    x=x/a;
    y=y/b;
    if(x>y)
    printf("Walter");
    else if(x<y)
    printf("Jesse");
    else if(x==y)
    printf("Both");
    
}