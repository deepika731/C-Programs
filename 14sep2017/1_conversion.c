#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("enter distance in kilometres:");
	scanf("%f",&a);
	b=1000*a;
	c=100000*a;
	d=3280.839895*a;
	e=39370.07874*a;
	printf("\n %f kilometres = %f metres \n",a,b);
	printf("%f kilometres = %f centimetres \n",a,c);
	printf("%f kilometres = %f feets \n",a,d);
	printf("%f kilometres = %f inches \n",a,e);
	return 0;
}

