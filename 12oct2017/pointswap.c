void swap1(int *c,int *d)
{
	int e;
	e=*c;
	*c=*d;
	*d=e;
	
}
#include<stdio.h>
int main()
{
	int a,b,*c,*d;
	a=10;
	b=20;
	c=&a;
	d=&b;
	printf("%d %d",a,b);
	swap1(c,d);
	printf("c=%d d=%d",*c,*d);
}
