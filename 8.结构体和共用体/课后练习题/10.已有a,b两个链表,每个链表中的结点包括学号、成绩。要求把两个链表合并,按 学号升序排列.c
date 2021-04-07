#include <stdio.h>
#include <string.h>

struct Student
{
	char num[6];
	float score;
	struct Student *next;
};

//创建链表函数
struct Student * create()
{
	struct Student *head,*current,*next;
	char ch;
	head=(struct Student *)malloc(sizeof(struct Student));
	printf("please input num--");
	scanf("%s",head->num);
	printf("please enput a score--:");
	scanf("%f",&head->score);
	current=head;
	
	getchar();
	printf("continue or not[Y/N]--");
	scanf("%c",&ch);
	while(ch!='N')
	{	
		next=(struct Student *)malloc(sizeof(struct Student));
		printf("please input next num--");
		scanf("%s",next->num);
		printf("please enput next score--");
		scanf("%f",&next->score);
		current->next=next;
		current=next;
		
		getchar();
		printf("continue or not[Y/N]--");
		scanf("%c",&ch);
	}
	
	current->next=NULL;
	return head;
}

//输出链表函数
void print(struct Student *p)
{
	do
	{
		printf("\t%s\t--\t%.2f\n",p->num,p->score);
		p=p->next;		
	}while(p!=NULL);	
}

//合并以及排序
struct Student * insert(struct Student *p1,struct Student *p2)
{
	struct Student *head,*NEXT;
	head=p1;
	while(p1!=NULL)
	{
		NEXT=p1;
		p1=p1->next;
	}
	NEXT->next=p2;
	return head;
}

//主函数
int main()
{
	struct Student *p1,*p2,*p3;
	p1=create();
	printf("\n  目前的元素值p1--:\n");
	//输出
	print(p1);
	p2=create();
	printf("\n  目前的元素值p2--:\n");
	//输出
	print(p2);
	printf("\n  目前的元素值p1+p2--:\n");
	p3=insert(p1,p2);
	print(p3);
}
