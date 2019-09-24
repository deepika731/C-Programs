#include<stdio.h>
int main()
{
	int i,j,n;
	char c;
	printf("enter no of rows:");
	scanf("%d",&n);
	c='*';
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c \t",c);

		}
		printf("\n");
	}
	
	return 0;
}
