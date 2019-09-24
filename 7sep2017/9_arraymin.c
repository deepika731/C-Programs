#include<stdio.h>
int main()
{
	int a[50],n,i,k=5,max,min;
	printf("enter size here:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element:");
		scanf("%d",&a[i]);
	}
	printf("elements in te array are:");
	for(i=0;i<n;i++)
		{printf("%d \t",a[i]);}
	printf("max is:");
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			{max=a[i];}
	}
	printf("%d",max);
	printf("min is:");
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			{min=a[i];}
	}
	printf("%d",min);
	return 0;
}
