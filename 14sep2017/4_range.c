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
	
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			{max=a[i];}
	}
	
	
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			{min=a[i];}
	}
	printf("\n range is %d \n",max-min);
	return 0;
}
