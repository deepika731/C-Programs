#include<stdio.h>
int main()
{
	int a[50],i,n,k,j,t;
	printf("enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter element:");
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{printf("%d \t",a[i]);}
	for(i=0;i<n-1;i++)
	{	for(j=0;j<n-i-1;j++)
		{	if(a[j]>a[j+1])
			{k=a[j];
			a[j]=a[j+1];
			a[j+1]=k;}
		}
	}
	
	for(i=0;i<n;i++)
	{printf(" %d \t",a[i]);}
	return 0;
}
	
	
	
	
