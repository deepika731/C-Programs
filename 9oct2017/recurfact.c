#include<stdio.h>
int main()
{
	int a,n,b;
	printf("enter no:");
	scanf("%d",&a);
	printf("enter no:");
	scanf("%d%d",&n,&b);
	printf("factorial =%d",fact(a));
	printf("%d",sumd(n));
	printf("%lf",powe(a,b));
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int sumd(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n%10)+sumd(n/10);
	}
}
double powe(int x,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return x*(powe(x,n-1));
	}
}
