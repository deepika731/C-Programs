#include<stdio.h>
int main()
{
	char str[100];
	int i,j,c;
	
	printf("enter string:");
	scanf("%s",str);
	printf("%s",str);
	i=0;
	c=0;
	while(str[i]!='\0')
	{
		i++;
		c++;
	}
	printf("%d",c);
	return 0;
}
