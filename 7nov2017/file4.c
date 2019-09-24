#include<stdio.h>
int main()
{
	FILE *fp,*fp2;
	int a,i=0,j;
	//char str[19];
	fp=fopen("f1.txt","r");
	fp2=fopen("f.txt","w");
	/*a=fgetc(fp);
	while((a=fgetc(fp))!=EOF)
	{
		str[i]=a;
		
		
		i++;
	}
	str[i]='\0';
	j=0;
	while(str[i]!='\0')
	{
		if(str[i]=='e')
		{
			str[i]='#';
		}
	}
	fclose(fp);*/
	while((a=fgetc(fp))!=EOF)
	{
		fputc(a,fp2);
	}
	fclose(fp);
	fclose(fp2);
	
}
