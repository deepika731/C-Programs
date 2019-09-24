

#include<stdio.h>
int main()
{
	decimal_to_binary(25);
}
int decimal_to_binary(int n)
{
	if(n==1 || n==0)
		{printf("%d",n);}
	else
	{
		
	 	decimal_to_binary(n/2);
		printf("%d",n%2); 
	}
}

