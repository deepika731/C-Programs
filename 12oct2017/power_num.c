float pow_num(int x,int y);
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter no:");
	scanf("%d",&x);
	printf("enter no:");
	scanf("%d",&y);
	pow_num(x,y);
}
float pow_num(int x,int y)
{
	float t=1,i=0;
	while(i<abs(y))
	{
		t=t*x;
		i++;
	}
	if(y>=0)
	{
		printf("%f",t);
	}
	else
	{
		printf("%f",1/t);
	}
}
	
