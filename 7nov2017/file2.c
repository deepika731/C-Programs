#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	int a;
	int nc=0,nw=1,nl=1;
	fp=fopen("f1.txt","r");
	fp2=fopen("f2.txt","w");
	a=fgetc(fp);
	while((a=fgetc(fp))!=EOF)
	{
		nc++;
		if(a==" " || a=="\t" || a=="\n")
		{
			nw++;
		}
		if(a=="\n")
		{
			nl++;
		}
	}
	fprintf(fp2,"\nno of words=%d",nw);
	fprintf(fp2,"\nno of characters=%d",nc);
	fprintf(fp2,"\nno of lines=%d",nl);
	fclose(fp);
}
