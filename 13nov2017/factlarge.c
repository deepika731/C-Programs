#include<stdio.h>
int main()
{
	int a[100],i,n,d,c,t;
	printf("enter a number:");
	scanf("%d",&n);
	a[0]=1;
	d=1;
	c=0;
	for(n=2;n<=n;n++)
	{
		for(i=0;i<d;i++)
		{
			t=a[i]*n+c;
			a[i]=t%10;
			c=t/10;
		}	
		while(c!=0)
		{	
			a[d++]=c%10;
			c=c/10;
		}
	}
	printf("factorial is:");
	for(i=d-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
