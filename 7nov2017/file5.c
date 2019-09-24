#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	/*fp=fopen("f.txt","r");
	printf("position=%d",ftell(fp));
	fseek(fp,10,0);
	printf(" 1ST position=%d",ftell(fp));
	fseek(fp,10,1);
	printf(" 2nd position=%d",ftell(fp));
	fseek(fp,-10,2);
	printf(" 3rd position=%d",ftell(fp));
	rewind(fp);
	printf("position=%d",ftell(fp));
	rename("f.txt","deepu.txt");
	fclose(fp);*/
	fp1=fopen("deepu.txt","r");
	while(fgetc(fp1)!=EOF)
	{
	}
	fseek(fp1,-10,SEEK_END);
	printf(" 4rd position=%d",ftell(fp1));
	fseek(fp1,-10,SEEK_CUR);
	printf(" 5rd position=%d",ftell(fp1));
	fseek(fp1,10,SEEK_SET);
	printf(" 6rd position=%d",ftell(fp1));
	fclose(fp1);
}

