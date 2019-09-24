#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	printf("enter range:");
	scanf("%d",&n);
	fib(n);
}
int fib(int n)
{
	if(n==0)
	{
		printf("0");
	}
	else if(n==1)
	{
		printf("1");
	}
	else
	{
		printf("%d",fib(n-1)+fib(n-2));
	}
}

