#include<stdio.h>
#include<stdlib.h>
struct student
{
	int admno;
	char name[20];
};
FILE *fp;
void write_record()
{
	fp=fopen("file1.bin","wb");
	int i;
	struct student obj[10];
	for(i=0;i<2;i++)
	{
		printf("enter name of student:");
		scanf("%s",obj[i].name);
		printf("enter roll no:");
		scanf("%d",&obj[i].admno);
		fwrite(&obj[i],sizeof(obj[i]),1,fp);
		
	}
	
	fclose(fp);
}
void display()
{
	fp=fopen("file1.bin","rb");
	
	struct student obj;
	while(fread(&obj,sizeof(obj),1,fp))
	{
		printf("\n%d\t",obj.admno);
		puts(obj.name);
	}
	fclose(fp);
}
void delete_record()
{
	struct student obj;
	FILE *fp1;
	
	int r;
	printf("enter rno  to delete:");
	scanf("%d",&r);
	fp=fopen("file1.bin","rb");
	fp1=fopen("temp.bin","wb");
	
	while(fread(&obj,sizeof(obj),1,fp))
	{
		if(obj.admno!=r)
		{
			
			fwrite(&obj,sizeof(obj),1,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("file1.bin");
	rename("temp.bin","file1.bin");
	display();
}
void insert_record()
{
	struct student obj;
	FILE *fp1;
	
	int r;
	printf("enter rno of student to insert:");
	scanf("%d",&r);
	fp1=fopen("temp.bin","wb");
	fp=fopen("file1.bin","rb");
	while(fread(&obj,sizeof(obj),1,fp))
	{
		fwrite(&obj,sizeof(obj),1,fp1);
		if(obj.admno+1==r)
		{
			printf("enter name of student:");
			scanf("%s",obj.name);
			printf("enter roll no:");
			scanf("%d",&obj.admno);
			fwrite(&obj,sizeof(obj),1,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("file1.bin");
	rename("temp.dat","file1.dat");
	display();
}
void edit_record()
{
	struct student obj;
	FILE *fp1;
	int r;
	printf("enter rno  to edit:");
	scanf("%d",&r);
	fp=fopen("file1.bin","rb");
	fp1=fopen("temp.bin","wb");
	while(fread(&obj,sizeof(obj),1,fp))
	{
		if(obj.admno==r)
		{
			printf("enter modified name of student:");
			scanf("%s",obj.name);
			printf("enter modified  roll no:");
			scanf("%d",&obj.admno);
			
			fwrite(&obj,sizeof(obj),1,fp1);
		}
		else
		{
			fwrite(&obj,sizeof(obj),1,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("file1.bin");
	rename("temp.bin","file1.bin");
	display();
}
void append_record()
{
	struct student obj;
	FILE *fp1;
	fp=fopen("file1.bin","rb");
	fp1=fopen("temp.bin","wb");
	while(fread(&obj,sizeof(obj),1,fp))
	{
		fwrite(&obj,sizeof(obj),1,fp1);
	}
	printf("enter modified name of student:");
	scanf("%s",obj.name);
	printf("enter modified  roll no:");
	scanf("%d",&obj.admno);
	fwrite(&obj,sizeof(obj),1,fp1);
	fclose(fp);
	fclose(fp1);
	remove("file1.bin");
	rename("temp.bin","file1.dat");
	display();
}

int main()
{
	int ch;
	while(1)
	{
		printf("enter option 1 to 6:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				write_record();
				break;
			case 2:
				display();
				break;
			case 3:
				delete_record();
				break;
			case 4:
				insert_record();
				break;
			case 5:
				edit_record();
				break;
			case 6:
				append_record();
				break;
			case 7:
				exit(0);
		}
	}
}

		
	
