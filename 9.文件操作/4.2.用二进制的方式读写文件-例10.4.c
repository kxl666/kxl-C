#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
#define A 0

struct Student_type
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

void save()
{
	FILE *fp;
	int i;
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl02.txt","wb"); //切换时文件名修改一下
	
	for(i=0;i<SIZE;i++)
		if (fwrite(&stud[i],sizeof(struct Student_type),1,fp)!=1)
			printf("file write error!\n");
		fclose(fp);
}


void load()
{
	FILE *fp;
	int i;
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","rb"))==NULL)
	{
		printf("cannot open infile\n");
		return;
	}
	for(i=1;i<SIZE+1;i++)
	{
		fread(&stud[i],sizeof(struct Student_type),i,fp);
			printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
		fclose(fp);
}



#if(A) //从键盘向文件输入
int main()
{
	int i;
	printf("Please enter data of students:\n");
	for(i=0;i<SIZE;i++)
		scanf("%s%d%d%s",&stud[i].name,&stud[i].num,&stud[i].age,&stud[i].addr);
	save();
}
#endif

#if(!A) //从文件A复制到文件B
int main()
{
	load();
	save();
}
#endif
