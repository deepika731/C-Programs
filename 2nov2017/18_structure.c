#include<stdio.h>
typedef struct student
{
	int r_no;
	char name[20];
	char class[10];
};
void display(struct student*);

int main()
{
	struct student *ptr;
	ptr=(struct student *)malloc(sizeof(struct student));
	printf("enter roll no:");
	scanf("%d",ptr->r_no);
	printf("enter name:"); 
	gets(ptr->name);
	printf("enter class:");
	gets(ptr->class);
	display(ptr);
}
void display(struct student *ptr)
{
	printf("%d \t",ptr->r_no);
	puts(ptr->name);
	puts(ptr->class);
}
	
