#include<stdio.h>
int main()
{
	unsigned int a,b,c;
	printf("enter number here:");
	scanf("%d",&a);
	while(a>0)
	{	c=a%10;
		b=b+c;
		a=a/10;
	
	}
	printf("sum=%d",b);
}
