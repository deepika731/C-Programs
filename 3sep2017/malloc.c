#include<stdio.h>
int main()
{
	int *ptr,n,i;
	printf("enter size:");
	scanf("%d",&n);
	ptr=(int *) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%p\t",(ptr+i));
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	free(ptr);
	
}
