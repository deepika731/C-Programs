#include<stdio.h>
int main()
{
	int a[10],i,j,n,t;
	printf("enter size here:");
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		t=a[1];
		a[1]=a[n-3];
		a[n-3]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
