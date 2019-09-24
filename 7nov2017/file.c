#include<stdio.h>
int main()
{
	FILE *fp;
	char a;
	//char buf[10];
	//fp=fopen("f1.txt","r");
	//fp=fopen("f1.txt","a");
	//fprintf(fp,"hi deepu how are you?\n");
	//fprintf(fp,"hi deepu how are you?");
	//fputs("hi deepu how are you?",fp);
	//fgets(buf,5,fp);
	//printf("%s",buf);
	//fp=fopen("f2.txt","w");
	//fprintf(fp,"hi deepu how are you?\n");
	
	//fclose(fp);
	fp=fopen("f2.txt","r");
	//fscanf(fp,"%s",buf);
	//printf("%s",buf);
	a=fgetc(fp);
	while((a=fgetc(fp))!=EOF)
	{
		putchar(a);
	}
	fclose(fp);
}
