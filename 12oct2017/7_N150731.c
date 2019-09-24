#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,j=0,k,n;
	printf("enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=n;i<2*n;i++)
	{
		if(j>=0 && j<=n)
		{
			c[i]=b[j];
			j++;
		}
	}
	printf("\n");
	for(i=0;i<2*n;i++)
	{
			printf("%d \t",c[i]);
	}
}
