#include<stdio.h>
struct student{
	int r_no;
	char name;
}s;
int struct student read();
void display(struct student s);
int main()
{
	printf("enter student details:");
	s=read();
	printf("student details are:");
	display(s);
}
int struct student read()
{
	scanf("%d",&s.r_no);	
	scanf("%c",&s.name);
}
void display(struct student s)
{
	printf("%d",s.r_no);	
	printf("%c",s.name);
}
