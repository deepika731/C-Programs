#include<stdio.h>
int main()
{
	int i,n,j,k,h,g;
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(k=0;k<n;k++)	
	{
		for(h=k+1;h<n;h++)
		{
			if(a[k]==a[h])
			{
				for(g=h;g<n;g++)
				{
					a[g]=a[g+1];
					n=n-1;
				}
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
}
	
