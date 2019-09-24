#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter a string:");
	gets(s);
	int k,h,i,j;
	printf("enter index value to delete:");
	scanf("%d %d",&k,&h);
	for(j=0;j<h-k;j++)
	{
		for(i=k;i<strlen(s);i++)
		{
			s[i]=s[i+1];
		}
	}
	puts(s);
}
