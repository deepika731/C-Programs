#include<stdio.h>
int main()
{
	int a[50][60],b[50][60],i,j,c1,c[50][60],r1,r3,c3,k;
	printf("enter rows here:");
	scanf("%d",&r1);
	printf("enter cols here:");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter rows here:");
	scanf("%d",&r3);
	printf("enter cols here:");
	scanf("%d",&c3);
	for(i=0;i<r3;i++)
	{
		for(j=0;j<c3;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d\t",a[i][j]);
		printf("\n");	
	}
	
	for(i=0;i<r3;i++)
	{
		for(j=0;j<c3;j++)
			{printf("%d\t",b[i][j]);}
		printf("\n");	
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c3;j++)
		{
			c[i][j]=0;
			for(k=0;k<r3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
