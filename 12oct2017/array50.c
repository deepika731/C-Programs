#include<stdio.h>
int main()
{
	int a[100],n,i,j;
	printf("enter size here:");
	scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		
		a[i]=i;
	}
	
	for(i=0;i<100;i++)
		{for(j=0;j<100;j++)
			{
				if(a[i]+a[j]==50)
				{
					printf("(%d,%d)",a[i],a[j]);
				}
			}
		}
	return 0;
}
