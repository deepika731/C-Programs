#include<stdio.h>
int main()
{
	int a[50],i,n,k;
	printf("enter size here:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		k=a[i];
		a[i]=a[(n-1)-i];
		a[(n-1)-i]=k;
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
