#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[10];

int main()
{
	int i;
	FILE *fp;
	if((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl01.txt","rb"))==NULL)
	{
		printf("NO\n");
		exit(0);
	}
	
	for(i=0;i<=10;i+=2)
	{
		fseek(fp,i*sizeof(struct Student),0); //移动文件位置标记
		fread(&stud[i],sizeof(struct Student),1,fp);
		printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
}
