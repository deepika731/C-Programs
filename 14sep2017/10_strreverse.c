#include<stdio.h>
int main()
{
	char str[100];
	int i,j,c,n,k;
	
	printf("enter string:");
	scanf("%s",str);
	i=0;
	c=0;
	while(str[i]!='\0')
	{
		i++;
		c++;
	}
	
	i=0;
	j=(c-1);
	while(i<j)
	{
		k=str[j];
		str[j]=str[i];
		str[i]=k;
		i++;
		j--;
	}
	printf("%s",str);
	

	
}
			
