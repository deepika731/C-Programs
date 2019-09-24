#include<stdio.h>
int main()
{
	int a[10],sum[10],i,j,n,s;
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
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		sum[i]=s;
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",sum[i]);
	}
}
