#include <stdio.h>
#include <string.h>

struct Student
{
	char name[10];
	struct Student *next;
};

struct Student * create()
{
	struct Student *head,*current,*next;
	char ch;
	head=(struct Student *)malloc(sizeof(struct Student));
	printf("please enput a name--");
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


int main()
{
	struct Student *p;
	p=create();
	do
	{
		printf("%s\n",p->name);
		p=p->next;		
	}while(p!=NULL);
}
