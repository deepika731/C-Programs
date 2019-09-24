#include<stdio.h>
int main()
{
	int f1=0,f2=1,fnext,n,i;
	printf("enter n value here:");
	scanf("%d",&n);
	if(n==1)
		{printf("%d",f1);}
	if(n==2)
		{printf("%d",f2);}
	for(i=2;i<n;i++)
	{
		fnext=f1+f2;
		f1=f2;
		f2=fnext;
	}
	printf("%d th value in fibanocci series is: %d \n",n,fnext);
	return 0;
}
