#include<stdio.h>
int main()
{
	int a[50][60],i,j,r,c,k=0,s=0;
	printf("enter rows here:");
	scanf("%d",&r);
	printf("enter cols here:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			{printf("%d \t",a[i][j]);}
		printf("\n");
	}
	if(r==c)
	
	{	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				{
					s=s+a[i][j];
				}
			}
		}
	}
	else
	{
		printf("trace can't be found");
	}
	
	printf("%d",s);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]%2==1)
			{
				k=k+a[i][j];
			}
		}
	}
	printf("%d",k);
	
			
	}
	
