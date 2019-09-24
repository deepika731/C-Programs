#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	int a;
	int nc=0,nv=0,ns=0,nd=0;
	fp=fopen("f1.txt","r");
	fp2=fopen("f2.txt","w");
	a=fgetc(fp);
	while((a=fgetc(fp))!=EOF)
	{
		if(a=="a" || a=="e" || a=="i" || a=="o" ||a=="u")
		{
			nv++;
		}
		else if(a>=65 && a<=122)
		{
			nc++;
		}
		else if(a==" " || a=="\t" || a=="\n")
		{
			ns++;
		}
		else
		{
			nd++;
		}
	}
	fprintf(fp2,"\nno of vowels=%d",nv);
	fprintf(fp2,"\nno of characters=%d",nc);
	fprintf(fp2,"\nno of consonents=%d",ns);
	fprintf(fp2,"\nno of digits=%d",nd);
	fclose(fp);
}
