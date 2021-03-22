#include <stdio.h>
#define N 3

struct Student
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

int main()
{
	void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student );
	struct Student stu[N],*p=stu;
	input(p);
	print(max(p));
}

void input(struct Student stu[])
{
	int i;
	printf("请输入各学生的信息:学号,姓名,3门课成绩-\n");
	for(i=0;i<N;i++)
	{
		scanf("%d %s %f %f %f",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
}

struct Student max(struct Student stu[])
{
	int i,m=0;
	for(i=0;i<N;i++)
		if (stu[i].aver>stu[m].aver) 
			m=i;
		return stu[m]; //返回包含该生信息的结构体数组的元素(数据)
}

void print(struct Student stud) //形参是struct Student 类型的变量(而不是这个类型的数组)
{
	printf("\n 成绩最高的学生是:\n");
	printf("学号: %d\n 姓名: %s\n 三门课成绩:%5.1f,%5.1f,%5.1f\n 平均成绩: %6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}
