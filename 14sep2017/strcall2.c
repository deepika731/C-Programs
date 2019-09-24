#include<stdio.h>
int main()
{
	char str[100],ch;
	int i,j,n;
	
	printf("enter size of string:");
	scanf("%d",&n);
	printf("enter string:");
	for(i=0;i<=n;i++)
	{
		str[i]=getchar();
	}
	str[i]='\0';
	i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
}
