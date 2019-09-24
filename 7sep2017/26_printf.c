#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	double d;
	short e;
	long int f;
	printf("enter the values:");
	scanf("%d %f %s %lf %hd %ld",&a,&b,&ch,&d,&e,&f);
	printf("\n a=%d b=%f ch=%c d=%lf e=%hd f=%ld",a,b,ch,d,e,f);
	return 0;
}
