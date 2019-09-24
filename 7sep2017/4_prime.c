#include<stdio.h>
int main()
{
	int a,b,i,j,c=0;
	printf("enter first no in range:");
	scanf("%d",&a);
	printf("enter second no in range:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)
			{printf("%d",i);}
	}
	return 0;
}
		
		
