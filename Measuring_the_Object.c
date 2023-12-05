#include<stdio.h>
int main()
{
    int x,y,z,w;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w==x)
    printf("YES");
    else if(w==y)
    printf("YES");
    else if(w==z)
    printf("YES");
    else if(x+y==w)
    printf("YES");
    else if(x+z==w)
    printf("YES");
    else if(y+z==w)
    printf("YES");
    else
    printf("NO");
}