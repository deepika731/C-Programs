#include<stdio.h>
struct student
{
	int r_no;
	char name[10];
	char class[10];
}s[10];
int main()
{
	int i,n,d;
	printf("enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter roll no of %dth student: ",i+1);
		scanf("%d",&s[i].r_no);
		printf("enter name of %dth student: ",i+1);
		scanf("%s",s[i].name);
		printf("enter class of %dth student: ",i+1);
		scanf("%s",s[i].class);
	}
	printf("the details of students are: \n");
	for(i=0;i<n;i++)
	{	
		
		printf("%d \t",s[i].r_no);
		printf("%s \t",s[i].name);
		printf("%s \n",s[i].class);
	}
	printf("enter the roll no u want to edit: ");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		if(s[i].r_no==d)
		{
			printf("enter roll no of %dth student: ",d);
			scanf("%d",&s[i].r_no);
			printf("enter name of %dth student: ",d);
			scanf("%s",s[i].name);
			printf("enter class of %dth student: ",d);
			scanf("%s",s[i].class);
			
		}
	}
	printf("the details of students are: \n");
	for(i=0;i<n;i++)
	{	
		
		printf("%d \t",s[i].r_no);
		printf("%s \t",s[i].name);
		printf("%s \n",s[i].class);
	}
	
	
}

