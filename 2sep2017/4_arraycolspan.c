#include<stdio.h>
int main()
{
	int a[50][50],i,j,r,c,k;
	printf("enter no of rows here:");
	scanf("%d",&r);
	printf("enter no of cols here:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
			{scanf("%d ",&a[i][j]);}
		
	}
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
			{printf("%d \t",a[i][j]);}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		
			if(j>=0 && j<c && k>=1 && k<r)
			{
				a[k][j]=a[k][j]+a[i][j];
				j++;
				k++;
				
			}
		
				
	}
	for(k=0;k<r;k++)
	{	for(j=0;j<c;j++)
			{printf("%d \t",a[k][j]);}
		printf("\n");
	}
}
	
			

