#include<stdio.h>
int main()
{
	int a,d,rev=0,n;
	printf("enter number here:");
	scanf("%d",&a);
	n=a;
	while(a>0)
	{
		d=a%10;
		rev=(rev*10)+d;
		a=a/10;
	}
	if(n==rev)
		{printf("palindrome\n");}
	else
		{printf(" not palindrome\n ");}
	return 0;
}
