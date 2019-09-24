#include<stdio.h>
int main()
{
	FILE *fp,*fp1,*fp2;
	int i,a;
	fp=fopen("integers.txt","r");
	fp1=fopen("even.txt","w");
	fp2=fopen("odd.txt","w");
	fscanf(fp,"%d",&a);
	while(a!=-1)
	{
		if(a%2==0)
		{
			fprintf(fp1,"%d \n",a);
		}
		else
		{
			fprintf(fp2,"%d \n",a);
		}
		fscanf(fp,"%d",&a);
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	
}
