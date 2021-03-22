#include <stdio.h>

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
};

struct Student stu[3]={{10101,"Li Lin",'M',18},{10102,"Zhang Fang",'M',19},{10104,"Wang Min",'F',20}};
int main()
{
	struct Student *p;
	printf("No.   Name		  sex  age\n");
	for(p=stu;p<stu+3;p++)
		printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->age);
}



//p=(struct Student *)stu[0].name; 此时,p的值是stu[0]元素的name 成员的起始地址。可以用“printf("%s" ,p);”输出stu[0]中成员name的值。但是,p仍保持原来的类型。如果执行“printf("%s" ,p+1);",则
//会输出stu[1]中name的值。执行p十十时,p的值增加了结构体struct Student的长度。
