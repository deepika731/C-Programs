#include<stdio.h>
int main()
{
	int a[50],i,n,k,j,min;
	printf("enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter element:");
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{printf("%d \t",a[i]);}
	for(i=0;i<=n;i++)
	{	min=a[i];
		if(a[i+1]<min)
		{	a[i]=a[i+1];
			a[i+1]=min;
			}
		a[i]=min;
	}
	for(i=0;i<n;i++)
	{printf("%d \t",a[i]);}
	return 0;
}
