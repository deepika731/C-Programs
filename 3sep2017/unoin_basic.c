#include<stdio.h>
union student 
{
	int r_no;
	char str[10];
}u;
int main()
{
	u.r_no=123;
	
	u.str[10]="deepika";
	printf("rno=%d",u.r_no);
	printf("marks=%s",u.str);
}
