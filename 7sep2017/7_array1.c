#include<stdio.h>
int main()
{
	int a[50],n,i,k=5;
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
	printf("\n even numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			{printf("%d \n",a[i]);}
	}
	printf("\nodd numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
			{printf("%d \n",a[i]);}
	}
	
	return 0;
}
