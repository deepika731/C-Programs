#include<stdio.h>
int main()
{
	int a[10],i,n,k,t,s,min,max;
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
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			k=i;
		}
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			t=i;
		}
	}
	s=a[t];
	a[t]=a[k];
	a[k]=s;
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
}
	
	
	
