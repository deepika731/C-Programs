#include<stdio.h>
double power(int x,float n)
{
	int r=1;
	float i;
	i=0;
	while(i<=n)
	{
		r=r*x;
		i=i+0.5;
	}
	return r;
}
double sqrtd(int a)
{
	int s;
	s=power(a,0.5);
	return s;
}
int main()
{
	int a;
	double res;
	printf("enter no:");
	scanf("%d",&a);
	res=sqrtd(a);
	printf("%lf",res);
	return 0;
}
	
