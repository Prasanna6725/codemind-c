#include<stdio.h>
int main()
{
    char as,A,Z,a,z;
    scanf("%c",&as);
    if(as>='A'&& as<='Z')
    {
        printf("uppercase alphabet");
    }
    else if( as>='a' && as<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}