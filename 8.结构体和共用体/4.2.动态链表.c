#include <stdio.h>
#include <string.h>

struct Student
{
	char name[10];
	struct Student *next;
};

//动态输入元素函数
struct Student * create()
{
	struct Student *head,*current,*next;
	char ch;
	head=(struct Student *)malloc(sizeof(struct Student));
	printf("please enput a name--:");
	scanf("%s",head->name);
	current=head;
	
	getchar();
	printf("continue or not[Y/N]--");
	scanf("%c",&ch);
	while(ch!='N')
	{	
		next=(struct Student *)malloc(sizeof(struct Student));
		printf("please enput next name--");
		scanf("%s",next->name);
		current->next=next;
		current=next;
		
		getchar();
		printf("continue or not[Y/N]--");
		scanf("%c",&ch);
	}
	
	current->next=NULL;
	return head;
}

//输出函数
void print(struct Student *p)
{
	do
	{
		printf("\t%s\n",p->name);
		p=p->next;		
	}while(p!=NULL);	
}

//插入元素函数
struct Student *insert(struct Student *p)
{
	struct Student *insert,*current;
	int position,i;
	current=p;
	insert=(struct Student *)malloc(sizeof(struct Student));
	printf("\n待插入的名字--:");
	scanf("%s",insert->name);
	getchar();
	for(i=1;current!=NULL;i++,current=current->next);
	printf("待插入的位置点[0.1.2...]--:");
	scanf("%d",&position);
	while (position>i||position<0)
	{
		printf("请重新待插入的位置点[0.1.2...]--:");
		scanf("%d",&position);
	}
	current=p;
	if (position>0)
	{
		while(position>1) 
		{
			current=current->next;
			position--;
		}
		insert->next=current->next;
		current->next=insert;
	}
	else if (position==0)
	{
		insert->next=current;
		p=insert;
	}
	printf("\n  插入后的数据--:\n");
	print(p);
	return p;
}

//删除元素函数
struct Student *deleted(struct Student *p)
{
	struct Student *current,*now=NULL;
	int position=0,i;
	char name[10];
	current=p;
	printf("需要删除的名字:");
	scanf("%s",name);
	for(i=1;current!=NULL;i++,current=current->next)
	{
		if (strcmp(name,current->name)==0)
			position=i;
	}
	current=p;
	printf("删除的是第%d个\n",position);
	if (position>1)
	{
		while(position>2)
		{
			current=current->next;
			position--;
		}
		now=current->next;
		current->next=now->next;
	}
	else if (position==1)
	{
		return (p=p->next);
	}
	else
		printf("\nerror!\n");
	
	return p;
}

int main()
{
	struct Student *p;
	char con,flag;
	//创建
	p=create();
	printf("\n  目前的元素值--:\n");
	//输出
	print(p);
	//插入
	getchar();
	printf("\n需要插入元素吗？--:");
	scanf("%c",&flag);
	while(flag=='Y')
	{
		p=insert(p);
		getchar();
		printf("\nInsert continue or not[Y/N]--");
		scanf("%c",&con);
		if (con=='N') flag='N';
	}
	//删除
	p=deleted(p);
	print(p);	
}
