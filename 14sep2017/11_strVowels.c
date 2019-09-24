#include<stdio.h>
int main()
{
	char str[100];
	int i,j,c;
	
	printf("enter string:");
	scanf("%s",str);
	c=0;
	while(str[i]!='\0')
	{
		i++;
		c++;
	}
	j=0;
	for(i=0;i<c;i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			{
				j++;
			}
	}
	printf("number of vowels = %d",j);
}
