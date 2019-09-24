#include<stdio.h>
int main()
{
	int a[100],i,j,n,max,min,f,k,s,b[50];
	char str[10];
	printf("enter option here:");
	scanf("%s",str);
	if(strcmp(str,"create")==0)

	{printf("enter size here:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
		printf("enter element:");
		scanf("%d",&a[i]);
	 }
	 printf("elements in te array are:");
	 for(i=0;i<n;i++)
		{printf("%d \t",a[i]);}}
	while(1){
	printf("enter option here:");
	scanf("%s",str);
	if(strcmp(str,"max")==0)
	{printf("max is:");
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			{max=a[i];}
	}
	printf("%d",max);}
	else if(strcmp(str,"min")==0)
	{printf("min is:");
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			{min=a[i];}
	}
	printf("%d",min);}
	else if(strcmp(str,"even")==0)
	{printf("\n even numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			{printf("%d \n",a[i]);}
	}}
	else if(strcmp(str,"odd")==0)
	{printf("\nodd numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
			{printf("%d \n",a[i]);}
	}}
	else if(strcmp(str,"insert")==0)
	{printf("enter element to insert:");
	scanf("%d",&k);
	printf("enter index:");
	scanf("%d",&f);
	
	for(i=n;i>=f;i--)
	{	
		a[i+1]=a[i];
		
		
	
	}
	a[f]=k;
	n++;
	
	
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}}
	
	else if(strcmp(str,"rev")==0)
	{
	int b[10];
	for(i=n-1;i>=0;i--)
	{
		b[n-1-i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	
	}
	
	else if(strcmp(str,"end")==0)
		{break;}
	else
		{printf("enter correct option");}
	}
	
}
