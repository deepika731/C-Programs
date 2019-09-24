#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	int i=0,j=0;
	char *p;
	p=a;
	char *q;
	q=b;
	for(i=strlen(a);i<(strlen(a)+strlen(b))-1;i++)
	{
		*(p+i)=*(q+j);
		j++;
	}
	printf("%s \n",a);
}
