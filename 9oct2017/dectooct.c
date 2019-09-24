

#include<stdio.h>
int main()
{
	decimal_to_octal(25);
}
void decimal_to_octal(int n)
{
	if(n<8)
		{printf("%d",n);}
	else
		{ decimal_to_octal(n/8);
		printf("%d",(n%8));}
}

