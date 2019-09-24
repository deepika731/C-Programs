void tower(int n,char s,char d,char t);
#include<stdio.h>
int main()
{
	tower(3,'A','B','c');
}
void tower(int n,char s,char d,char t)
{
	if(n==1)
	{
		printf("move disk from %c to %c\n",s,d);
	}
	else
	{
		tower(n-1,s,t,d);
		tower(1,s,d,t);
		tower(n-1,t,d,s);
	}
}
