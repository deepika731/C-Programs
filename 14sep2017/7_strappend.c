#include<stdio.h>
int main()
{
	char str1[100],str3[100];
	int i,j;
	
	printf("enter string:");
	scanf("%s",str1);
	
	printf("enter string:");
	scanf("%s",str3);
	i=0;
	j=0;
	while(str1[i]!='\0')
	{
		
		i++;
		
	}
	j=0;
	while(str3[j]!='\0')
	{
		str1[i]=str3[j];
		i++;
		j++;
	}
	
	printf("%s \n",str1);
	return 0;
}
