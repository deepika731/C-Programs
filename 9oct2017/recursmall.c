int small(int a[100],int n,int min,int i)
{
	
	if(i==n)
	{
		return min;
	}
	else
	{
		if(a[i]<min)
		{
			min=a[i];
		}
			
		small(a,n,min,i+1);
		
	}
}
#include<stdio.h>
int main()
{
	int i,n,a[100],min;
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
	printf("small number=%d",small(a,n,a[0],0));
}
	

	

