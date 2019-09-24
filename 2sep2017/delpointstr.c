#include<stdio.h>
#include<string.h>
char delete_char(char *p,char *d,int *s);
int main()
{
	char a[100],d;
	gets(a);
	printf("enter character to delete:");
	scanf("%c",&d);
	int l=strlen(a)-1;
	delete_char(a,&d,&l);
}
char delete_char(char *p,char *d,int *s)
{
	int i=0,j=0;
	char *c;
	c=p;
	for(i=0;i<*s;i++)
	{
		if(*(p+i)==*d)
		{
			for(j=0;j<*s;j++)
			{
				*(c+j)=*(i+j+1);
			}
			*((p*)+(*s))='\0';
		}
	}
}
