#include<stdio.h>
int main()
{
	int a,b,i,m,g;
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
		printf("%d ",g);
}