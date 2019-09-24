#include<stdio.h>
double power(int x,int n)
{
	int r=1,i;
	for(i=0;i<n;i++)
	{
		r=r*x;
	}
	return r;
}
int main()
{
	int x,n;
	double res;
	printf("enter no:");
	scanf("%d",&x);
	printf("enter no:");
	scanf("%d",&n);	
	res=power(x,n);
	printf("%lf",res);
	return 0;
}
