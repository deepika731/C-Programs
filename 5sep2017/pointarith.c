#include<stdio.h>
int main()
{
	int a,b,*ptr,*ptrr;
	ptr=&a;
	ptrr=&b;
	a=5;
	b=10;
	printf("%u \n",*ptr+*ptrr);
	printf("%u \n",(*ptr)-(*ptrr));
	printf("%u \n",(*ptr)*(*ptrr));
	printf("%u \n",(*ptr)/(*ptrr));
}
	
