#include<stdio.h>
int main()
{
	float a[50][50],d;
	int i,j,r,c,k;
	printf("enter no of rows here:");
	scanf("%d",&r);
	printf("enter no of cols here:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
			{scanf("%f ",&a[i][j]);}
		
	}
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
			{printf("%f \t",a[i][j]);}
		printf("\n");
	}
	if(r==c)
	{for(i=0;i<r;i++)
		{for(j=c;j<2*c;j++)
			{if(j==i+c)
				a[i][j]=1;
			else
				a[i][j]=0;}}}
	for(i=0;i<r;i++)
	{	for(j=0;j<2*c;j++)
			{printf("%f \t",a[i][j]);}
		printf("\n");
	}
	for(i=0;i<r;i++)
		{for(j=0;j<c;j++)
			{if(i!=j && j<c)
				{d=a[j][i]/a[i][i];

			for(k=0;k<2*r;k++)
				{a[j][k]=a[j][k]-d*a[i][k];}}
	}}
	for(i=0;i<c;i++)
		{d=a[i][i];
			for(j=0;j<2*c;j++)
				{a[i][j]=a[i][j]/d;}
		}
			
	for(i=0;i<r;i++)
	{	for(j=c;j<2*c;j++)
		{printf("%f \t",a[i][j]);}
		printf("\n");
	}
}
	
			
		
