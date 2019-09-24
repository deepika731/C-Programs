#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	double e,f;
	char g;
	printf("enter values here:");
	scanf("%d %d %f %f %lf %lf %c",&a,&b,&c,&d,&e,&f,&g);
	//type casting
	c= (float) e;
	a= (int) d;
	g= (char) b; 
	printf("%f %d %c \n",c,a,g);
	//type conversion
	b=d;
	f=c;
	g=a;
	printf("%d %f %c \n",b,f,g);

	return 0;
}
