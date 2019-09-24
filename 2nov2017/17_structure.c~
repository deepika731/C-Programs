#include<stdio.h>
struct hotel
{
	
	char mem[10];
	char add[10];
	int grade;
	int r_no;
	int r_charge;
}s[]={{"hotel1","junction1",1,35,1775},{"hotel2","junction2",2,36,1660},{"hotel3","junction3",3,30,2043},{"hotel4","junction4",4,35,1775},{"hotel5","junction5",5,32,1145},{"hotel6","junction6",1,37,1789},{"hotel7","junction7",2,34,1586},{"hotel8","junction8",3,35,1687},{"hotel9","junction9",4,39,2384},{"hotel10","junction10",5,39,1456},{"hotel11","junction11",1,35,1775},{"hotel12","junction12",2,33,1687},{"hotel13","junction13",3,36,1485},{"hotel14","junction14",4,35,1586}};

	
void grade_of()
{
	int i,n;
	
	printf("enter the grade:");
	scanf("%d",&n);
	for(i=0;i<14;i++)
	{
		if(s[i].grade==n)
		{
			printf("%s",s[i].mem);
			printf("%s",s[i].add);
			printf("%d",s[i].grade);
			printf("%d",s[i].r_no);
			printf("%d",s[i].r_charge);
		}
	}
}
void price()
{
	int i,n;
	
	printf("enter the price:");
	scanf("%d",&n);
	for(i=0;i<14;i++)
	{
		if(s[i].r_charge<=n)
		{
			printf("%s",s[i].mem);
			printf("%s",s[i].add);
			printf("%d",s[i].grade);
			printf("%d",s[i].r_no);
			printf("%d",s[i].r_charge);
		}
	}
}

int main()
{
	
	grade_of();
	price();
}
	
	
