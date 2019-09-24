#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,res;
	printf("enter no:");
	scanf("%d",&a);
	printf("enter no:");
	scanf("%d",&b);
	res=gcd(a,b);
	printf("%d",res);
	return 0;
}
int gcd(int a,int b)
{
	int r;
	r=a%b;
	if(b==0)
	{	
		return a;
	}
	
	else	
	{while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}}
	return b;
}
		
