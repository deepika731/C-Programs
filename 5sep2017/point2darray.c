#include<stdio.h>
int main()
{
	int *ptr,a[10][10],i,j,r=2,c=2;
	ptr=a;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",*(ptr+i)+j);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		printf("%d \n",*(ptr+i));
	}
	for(i=0;i<r;i++)
	{
		printf("%u \n",(ptr+i));
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%u \n",*(ptr+i)+j);
		}
	}
	
}
	
	
