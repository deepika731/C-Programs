#include<stdio.h>
int main()
{
	int a[50],i,n,k,j,s,e,m,x;
	printf("enter size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{printf("enter element:");
	scanf("%d",&a[i]);}
	
	for(i=0;i<n;i++)
	{printf("%d \t",a[i]);}
	printf("enter the element to search:");
	scanf("%d",&x);
	
	for(i=0;i<=n;i++)
	{	for(j=0;j<=n;j++);
		{	if(a[i]>a[i+1])
			{k=a[i];
			a[i]=a[i+1];
			a[i+1]=k;}
		}
	}
	
	s=0;
	e=n-1;
	j=0;
	while(s<=e)
	{	m=(s+e)/2;
		if(a[m]==x)
			{printf("\n%d is present",x);
			j=j+1;
			break;}
		else if(x>a[m])
			{s=m+1;}
		else
			{e=m-1;}
	}
	if(j==0)
		printf("\n%d not found",x);
	return 0;
}
	
