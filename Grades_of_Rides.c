#include<stdio.h>
int main()
{
    int h,i,s;
    scanf("%d%d%d",&h,&i,&s);
    if(h>50 && i>60 && s>100)
    {
        printf("10");
    }
    else if(h>50 && i>60 && s<=100)
    {
        printf("9");
    }
    else if(i>60 && s>100 && h<=50)
    {
        printf("8");
    }
    else if(h>50 && s>100 && i<=60)
    {
        printf("7");
    }
    else if(i>60 || s>100 || h>50)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}