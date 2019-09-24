#include<stdio.h>
int main()
{
	char str1[100],str3[100],str4[100],ch;
	int i,j,n1,n3;
	
	printf("enter size of string:");
	scanf("%d",&n1);
	printf("enter string:");
	for(i=0;i<=n1;i++)
	{
		str1[i]=getchar();
	}
	str1[i]='\0';
	i=0;
	while(str1[i]!='\0')
	{
		printf("%c",str1[i]);
		i++;
	}
	printf("enter size of string:");
	scanf("%d",&n3);
	printf("enter string:");
	for(i=0;i<=n3;i++)
	{
		str3[i]=getchar();
	}
	str3[i]='\0';
	i=0;
	while(str3[i]!='\0')
	{
		printf("%c",str3[i]);
		i++;
	}
	i=0;
	j=0;
	while(str1[i]!='\0')
	{
		str4[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	j=0;
	while(str3[i]!='\0')
	{
		str4[j+n1]=str3[i];
		i++;
		j++;
	}
	
	printf("%s",str4);
	return 0;
}
