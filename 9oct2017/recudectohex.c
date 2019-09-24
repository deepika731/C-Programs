#include<stdio.h>
int main()
{
	decimal_to_hex(0);
}
void decimal_to_hex(int n)
{
	if(n>=0 && n<=9)
		{printf("%d",n);}
	else if(n>=10 && n<=15)
		{
			printf("%c",n+55);
		}
	else
		{ decimal_to_hex(n/16);
		printf("%d",(n%16));}
}
