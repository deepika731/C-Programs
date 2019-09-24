#include<stdio.h>
int main()
{
	int a;

	printf("enter year here:");
	scanf("%d",&a);
	a%100==0?(a%400==0?printf("%d is leap year",a):printf("%d is not leap year",a)):(a%4==0?printf("%d is leap year",a):printf("%d is not leap year",a));
	return 0;
}
