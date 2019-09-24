#include<stdio.h>
int main()
{
	int a[50],i,j,k,n,max;
	printf("enter size here:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
			scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	
			printf("%d",a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			k=i;
		}
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			
			if(a[i]==a[k])
			{
				continue;
			}
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
