#include<stdio.h>
int main()
{
	int i,j,k,a[10],b[10],c[10];
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
	printf("enter size:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d \t",b[i]);
	}
	printf("enter size:");
	scanf("%d",&n);
	for(i=0;i<l;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<l;i++)
	{
		printf("%d \t",c[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<l;k++)
			{
				if(a[i]==b[j] && b[j]==c[k])
				{
					printf("%d",a[i]);
				}
			}
		}
	}
	
}
