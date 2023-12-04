#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0)
    {
        printf("NORMAL");
    }
    else if((x-1)%3==0)
    {
        printf("HUGE");
    }
    else if((x-2)%3==0)
    {
        printf("SMALL");
    }
    else if((x+1)%3==0)
    {
        printf("SMALL");
    }
    else if((x+2)%3==0)
    {
        printf("HUGE");
    }
}