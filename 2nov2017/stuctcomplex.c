#include<stdio.h>
typedef struct
{
	int r,i;
}complex;
complex read()
{
	complex s;
	printf("enter real part:");
	scanf("%d",&s.r);
	printf("enter img part:");
	scanf("%d",&s.i);
	return s;
}
void display(complex s)
{

	printf("%d + i %d",s.r,s.i);
	
}
complex add(complex n1,complex n2)
{
	complex res;
	res.r=n1.r+n2.r;
	res.i=n1.i+n2.i;
	return res;
}
complex mul(complex n1,complex n2)
{
	complex res;
	res.r=(n1.r*n2.r)-(n1.r*n2.i);
	res.i=(n1.r*n2.i)+(n1.i*n2.r);
	return res;
}
int main()
{
	complex n1,n2,result;
	char str;
	
	
	
	while(1)
	{
		printf("enter option here:");
		scanf("%s",&str);
		if(strcmp(str,"create")==0)
		{
			printf("enter 1st no:");
			n1=read();	
			printf("enter 2st no:");
			n2=read();
		}
		if(strcmp(str,"display")==0)
		{
			printf("1st no is:");
			display(n1);
	
			printf("2st no is:");
			display(n2);
		}
		if(strcmp(str,"add")==0)
		{
			result =add(n1,n2);
			printf("addition:");
			display(result);
		}
		if(strcmp(str,"mul")==0)
		{
			
			result=mul(n1,n2);
			printf("multiplication:");
			display(result);
		}
		if(strcmp(str,"exit")==0)
		{
				break;
		}
	}
		
}

