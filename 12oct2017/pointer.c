#include<stdio.h>
int main()
{
	int a,*ptr,**p;
	char ch;
	a=10;
	ptr=&ch;
	p=&ptr;
	printf("%d\n",a);
	printf("%u\n",&a);
	printf("%u\n",ptr);
	printf("%u\n",&ptr);
	printf("%d\n",*ptr);
	printf("%u\n",p);
	printf("%u\n",*p);
	printf("%u\n",&p);
	printf("%d\n",**p);

}
