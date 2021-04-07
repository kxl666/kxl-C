#include <stdio.h>
#define NUM 3

struct student
{
	char num[10];
	char name[8];
	float score[3];
	float ave;
}stu[NUM];

int main()
{	
	int i,j,maxj;
	float sum[NUM],max;
	for(i=0;i<NUM;i++)
	{
		printf(" Input score of student %d:\n",i+1);
		printf("NO:");
		scanf("%s",stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);
		sum[i]=0.0;
		for(j=0;j<3;j++)
		{
			printf("score %d:",j+1);
			scanf("%f",&stu[i].score[j]);
			sum[i]+=stu[i].score[j];
		}
		stu[i].ave=sum[i]/3.0;
		printf("%.2f\n",stu[i].ave);
	}
	
	max=0.0;
	for(i=0;i<NUM;i++)
		if (sum[i]>max)
		{
			max=sum[i];
			maxj=i;
		}
		
		printf("\n分数最高者是: %s\n",stu[maxj].name);
		printf("考号:%-6s\n科目一:%.2f\n科目二:%.2f\n科目三:%.2f\n%s的平均分是:%.2f\n\n",stu[maxj].num,stu[maxj].score[0],stu[maxj].score[1],stu[maxj].score[2],stu[maxj].name,stu[maxj].ave);
}
