#include<stdio.h>
int main()
{
	int a[10],i,j,n,k;
	printf("enter no:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	(
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=i;k<n;k++)
				{
					a[k]=a[k+1];
				}
				
			}
			n--;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
