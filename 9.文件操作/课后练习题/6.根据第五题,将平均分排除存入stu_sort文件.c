#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 2

struct Score
{
	float sub1;
	float sub2;
	float sub3;
};

struct Student
{
	int num;
	char name[10];
	struct Score score;
	float ave;
};

int main()
{	
	FILE *fp;
	int i=0,j,k,min;
	float sum=0.0;
	struct Student stu[NUM],temp,stu2[NUM];
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","r");
	printf("\n从文件中读取后的数据:");
	for(i=0;i<NUM;i++)
	{
		fread(&stu[i],sizeof(struct Student),1,fp);
		printf("\n%d, %s, %.2f, %.2f, %.2f, %6.2f\n",stu[i].num,stu[i].name,stu[i].score.sub1,stu[i].score.sub2,stu[i].score.sub3,stu[i].ave);
	}
	fclose(fp);
	
	for(i=0;i<NUM;i++)
	{
		k=i;
		for(j=i+1;j<NUM;j++)
			if (stu[k].ave>stu[j].ave)
				min=j;
			
			temp=stu[i];
			stu[i]=stu[min];
			stu[min]=temp;	
	}
	
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\stu_sort.txt","w");
	i=0;
	while(i<NUM)
	{
		fwrite(&stu[i],sizeof(struct Student),1,fp);
		i++;
	}
	fclose(fp);
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\stu_sort.txt","r");
	printf("\n排序后输入的文件输出的数据:");
	i=0;
	while(i<NUM)
	{
		fread(&stu2[i],sizeof(struct Student),1,fp);
		printf("\n%d, %s, %.2f, %.2f, %.2f, %6.2f\n",stu2[i].num,stu2[i].name,stu2[i].score.sub1,stu2[i].score.sub2,stu2[i].score.sub3,stu2[i].ave);
		i++;
	}
	fclose(fp);
}
