#include<stdio.h>
int main()
{
	int n,i,a;
	printf("enter no here:");
	scanf("%d",&n);
	i=0;
	while(n!=0)
	{
		a=n%10;
		i=(i*10)+a;
		n=n/10;
	}
	printf("reverse of given number is %d",i);
}
