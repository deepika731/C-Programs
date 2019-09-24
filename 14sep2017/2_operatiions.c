#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number here:");
	scanf("%d",&b);
	printf("enter third number here:");
	scanf("%d",&c);
	
	while(1)
	{
		printf("enter 1 for product 2 for smallest number 3 for middle number 4 for bigger number 5 to exit:");
		scanf("%d",&d);
		if(d==1)
			{
				printf("\n product=%d \n",a*b*c);
			}
		else if(d==2)
		{	if(a<b && a<c)
				{
					printf("\n %d is smaller \n",a);
				}
			else if(b<c && b<a)
				{
					printf("\n %d is  smaller \n",b);
				}
			else if(c<a && c<b)
				{
					printf("\n %d is smaller \n",c);
				}
			else
				{
					printf("\n three are equal \n");
				}
		}
		else if(d==3)
		{	if(b>a && a>c)
				{
					printf("\n %d is middle number \n",a);
				}
			else if(c>b && b>a)
				{
					printf("\n %d is middle number \n",b);
				}
			else if(a>c && c>b)
				{
					printf("\n %d is middle number \n",c);
				}
			else
				{
					printf("\n three are equal \n");
				}
		}
		else if(d==4)
		{	if(a>b && a>c)
				{
					printf("\n %d is bigger \n",a);
				}
			else if(b>c && b>a)
				{
					printf("\n %d is  bigger \n",b);
				}
			else if(c>a && c>b)
				{
					printf("\n %d is bigger \n",c);
				}
			else
				{
					printf("\n three are equal \n");
				}
		}
		else if(d==5)
		{	
			break;
		}
		else
		{	
			printf("\n enter correct option \n");
		}
	}
		return 0;

}
			
				
			
