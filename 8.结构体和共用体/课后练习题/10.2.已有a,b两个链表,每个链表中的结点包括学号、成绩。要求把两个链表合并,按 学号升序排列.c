#include <stdio.h>
#include <string.h>

struct Student
{
	int num;
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
	scanf("%d",&head->num);
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
		scanf("%d",&next->num);
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
		printf("\t%d\t--\t%.2f\n",p->num,p->score);
		p=p->next;		
	}while(p!=NULL);	
	printf("\n");
}

//合并以及排序
struct Student * insert(struct Student *ah,struct Student *bh)
{
	struct Student *pa1,*pa2,*pb1,*pb2;
	pa2=pa1=ah;
	pb2=pb1=bh;
	do
	{
		while((pb1->num>pa1->num)&&(pa1->next!=NULL))
		{
			pa2=pa1;
			pa1=pa1->next;
		}
		if (pb1->num<=pa1->num)
		{
			if (ah==pa1)
				ah=pb1;
			else
				pa2->next=pb1;
			pb1=pb1->next;
			pb2->next=pa1;
			pa2=pb2;
			pb2=pb1;
		}
	}while((pa1->next!=NULL)||(pa1==NULL&&pb1!=NULL));
	if ((pb1!=NULL)&&(pb1->num>pa1->num)&&(pa1->next==NULL))
		pa1->next=pb1;
	return ah;
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
