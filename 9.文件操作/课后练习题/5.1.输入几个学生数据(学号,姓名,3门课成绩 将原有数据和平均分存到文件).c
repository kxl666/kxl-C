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
	int i=0;
	float sum=0.0;
	struct Student student[NUM],*p=&student[0],stu[NUM];
	printf("please input the information of %d: \n",NUM);
	while(i<NUM)
	{
	sum=0.0;
	scanf("%d %s %f %f %f",&p->num,&p->name,&p->score.sub1,&p->score.sub2,&p->score.sub3);
	//= scanf("%d %s %f %f %f",&student[i].num,&student[i].name,&student[i].score.sub1,&student[i].score.sub2,&student[i].score.sub3);
	sum+=(p->score.sub1+p->score.sub2+p->score.sub3);
	p->ave=sum/3;
	i++;
	p++;
	}
	
	printf("学号  姓名  数学  语文  英语   平均分\n");
	for(i=0,p=&student[0];i<NUM;i++,p++)
	{
		printf("%2d %6s %.2f %.2f %.2f %.2f\t\n",p->num,p->name,p->score.sub1,p->score.sub2,p->score.sub3,p->ave);
	}

	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","w");
	for(p=student;p<student+NUM;p++)
	if(fwrite(p,sizeof(struct Student),1,fp)!=1)
		printf("file write error!");

	fclose(fp);
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","r");
	printf("\n从文件中读取后的数据:");
	for(i=0;i<NUM;i++)
	{
	fread(&stu[i],sizeof(struct Student),1,fp);
	printf("\n%d, %s, %.2f, %.2f, %.2f, %6.2f\n",stu[i].num,stu[i].name,stu[i].score.sub1,stu[i].score.sub2,stu[i].score.sub3,stu[i].ave);
	}
	fclose(fp);
}
