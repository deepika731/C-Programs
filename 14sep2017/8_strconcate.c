#include<stdio.h>
int main()
{
	char str1[100],str3[100],str4[100];
	int i,j;
	
	printf("enter string:");
	scanf("%s",str1);
	
	printf("enter string:");
	scanf("%s",str3);
	
	i=0;
	j=0;
	while(str1[i]!='\0')
	{
		str4[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str3[i]!='\0')
	{
		str4[j]=str3[i];
		i++;
		j++;
	}
	
	printf("%s \n",str4);
	return 0;
	
}	
