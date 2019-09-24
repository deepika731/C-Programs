#include<stdio.h>
int main()
{
	char str[100],ch;
	int i,j,nc,nl,nw,n;
	
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
	nc=1;
	nl=0;
	nw=0;
	while(str[i]!='\0')
	{
		nc++;
		if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
			nw++;
		if(str[i]=='\n')
			nl++;
	}
	printf("%d %d %d",nc,nl,nw);
}
