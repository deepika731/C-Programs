#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	int a;
	fp=fopen("f.txt","r");
	fp1=fopen("temp.txt","w");
	while((a=fgetc(fp))!=EOF)
	{
		if(a>=96 && a<=122)
		{
			fputc(a-32,fp1);
		}
		else
		{
			fputc(a,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	fp=fopen("f.txt","w");
	fp1=fopen("temp.txt","r");
	while((a=fgetc(fp1))!=EOF)
	{
		fputc(a,fp);
	}
		
	remove("temp.txt");
	fclose(fp);
	fclose(fp1);
}
