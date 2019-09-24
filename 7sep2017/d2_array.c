#include<stdio.h>
int main()
{
	int a[2][2],r,c,i,j,s;
	print("enter no of rows:");
	scanf("%d",&r);
	printf("enter no of cols:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	
		scanf("%d",&a[i][j]);
	
	}
	for(i=0;i<r;i++)
	
	for(j=0;j<c;j++)
	{
		printf("%d \t";a[i][j]);
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
	

}
	
	
