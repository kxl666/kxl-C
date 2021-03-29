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
	struct Student stu[NUM+1],temp,stu2[NUM];
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\stu_sort.txt","r");
	printf("从文件stu_sort.txt 中读取后的数据:");
	for(i=0;i<NUM;i++)
	{
		fread(&stu[i],sizeof(struct Student),1,fp);
		printf("\n%d, %s, %.2f, %.2f, %.2f, %6.2f\n",stu[i].num,stu[i].name,stu[i].score.sub1,stu[i].score.sub2,stu[i].score.sub3,stu[i].ave);
	}
	fclose(fp);
	
	printf("学号:");
	scanf("%d",&stu[2].num);
	printf("姓名:");
	scanf("%s",stu[2].name);
	printf("请输入三科成绩:");
	scanf("%f%f%f",&stu[2].score.sub1,&stu[2].score.sub2,&stu[2].score.sub3);
	stu[2].ave=(stu[2].score.sub1+stu[2].score.sub2+stu[2].score.sub3)/3.0;
	
	printf("\n输如后排序前的数据:");
	i=0;
	while(i<NUM+1)
	{
		printf("\n%d, %s, %.2f, %.2f, %.2f, %6.2f\n",stu[i].num,stu[i].name,stu[i].score.sub1,stu[i].score.sub2,stu[i].score.sub3,stu[i].ave);
		i++;
	}
	
	for(i=0;i<NUM+1;i++)
		for(j=0;j<NUM+1-i-1;j++)
			if (stu[j].ave<stu[j+1].ave)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
			
			
			fp=fopen("C:\\Users\\kxl\\Desktop\\stu_sort02.txt","w");
			i=0;
			while(i<NUM+1)
			{	
				fwrite(&stu[i],sizeof(struct Student),1,fp);
				i++;
			}
			fclose(fp);
			
			fp=fopen("C:\\Users\\kxl\\Desktop\\stu_sort02.txt","r");
			printf("\n输如后排序后存入stu_sort2文件的数据:");
			i=0;
			while(i<NUM+1)
			{	
				fread(&stu2[i],sizeof(struct Student),1,fp);
				printf("\n%d, %s, %.2f, %.2f, %.2f, %6.2f\n",stu2[i].num,stu2[i].name,stu2[i].score.sub1,stu2[i].score.sub2,stu2[i].score.sub3,stu2[i].ave);
				i++;
			}
			fclose(fp);
			
}
