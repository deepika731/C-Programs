#include<stdio.h>
int main()
{
	int a,b,i,j,c,d,r;
	printf("enter no;");
	scanf("%d",&a);
	printf("enter no;");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		for(j=a;j<=b;j++)
		{	c=i;
			d=j;
			r=c%d;
			while(c%d!=0)
			{
				c=d;
				d=r;
				r=c%d;
			}
		
			if(d==1)
			{
				printf("(%d %d)",i,j);
			}
		}
		
	}
}
				
	
	
