void str_reverse(char str,int n);
void str_reverse(char str,int n)
{
	if(n==0)
	{
		printf("%c",str[0]);
	}
	else
	{
		printf("%c",str[n]);
		str_reverse(str,n-1);
		
	}
}
#include<stdio.h>
int main()
{
	int n,c=0,i=0;
	char str;
	printf("enter string here:");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		c++;
		i++;
	}
	n=c;
	
	str_reverse(str,n);
}
	
