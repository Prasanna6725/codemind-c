#include<stdio.h>
int main()
{
    float n,s,c,t,b;
    scanf("%f",&n);
    if(n<=199 && n>=0)
    {
        c=1.20;
    }
    else if(n>=200 && n<400)
    {
        c=1.40;
    }
    else if(n>=400 && n<600)
    {
        c=1.60;
    }
    else if(n>=600 && n<800)
    {
        c=1.80;
    }
    else if(n>=800)
    {
        c=2.00;
    }
    b=n*c;
    if(b>=400)
    {
        s=0.15*b;
    }
    else
    {
        s=0;
    }
    t=b+s;
    printf("Units Consumed: %.0f
",n);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",s);
    printf("Total Amount: %.2f",t);
}