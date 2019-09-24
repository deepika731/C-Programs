#include<stdio.h>
int main()
{
	int f1=0,f2=1,fnext,n,i;
	printf("enter n value here:");
	scanf("%d",&n);
	printf("fibonocci series upto %d value is:",n);
	if(n==1)
		{printf("%d",f1);}
	if(n==2)
		{printf("%d",f1,f2);}
	else
	{	
		printf("%d \t %d",f1,f2);
		

		for(i=2;i<n;i++)
		{
			fnext=f1+f2;
			printf("\t %d \t",fnext);
			f1=f2;
			f2=fnext;
			
		
		}
	}
	return 0;





}
