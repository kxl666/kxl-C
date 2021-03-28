#include <stdio.h>
#include <stdlib.h>
#define NUM 3

struct student
{
	char num[10];
	char name[8];
	int score[3]; //注意这里直接定义一个数组 比 再定义一个结构体 方便!
	float ave;
}stu[2];

int main()
{	
	int i,j,sum;
	FILE *fp;
	for(i=0;i<NUM;i++)
	{
		printf("\n input score of student %d:\n",i+1);
		printf("NO:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		sum=0;
		for(j=0;j<NUM;j++)
		{
			printf("score %d:",j+1);
			scanf("%d",&stu[i].score[j]);
			sum+=stu[i].score[j];
		}
		stu[i].ave=sum/3.0;
	}
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\1.txt","w");
	for(i=0;i<NUM;i++)
		if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
			printf("file write error!\n");
		fclose(fp);
		
		fp=fopen("C:\\Users\\kxl\\Desktop\\1.txt","r");
		for(i=0;i<NUM;i++)
		{
			fread(&stu[i],sizeof(struct student),1,fp);
			printf("\n%s, %s, %d, %d, %d, %6.2f\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].ave);
		}
		fclose(fp);
}
