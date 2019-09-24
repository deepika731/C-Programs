#include<stdio.h>
int main()
{
	int a=50,b=70;
	char c='*';
	int *ptr;
	//*ptr=c;
	//printf("%d",*ptr);
	a=&b;
	printf("%d",a);
}
