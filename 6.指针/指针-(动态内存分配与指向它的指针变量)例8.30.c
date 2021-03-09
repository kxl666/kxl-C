#include <stdio.h>
#include <stdlib.h>

//01 怎样建立内存的动态分配
int main()
{	
	void check(int *);
	int *p1,i;
	p1=(int *)malloc(5*sizeof(int)); //(int *)强制转换,因为malloc函数是void型,(int *)可省略因为因为在进行编译时,系统可以自动进行隐式的转换
	for(i=0;i<5;i++)
		scanf("%d",p1+i);
	check(p1);
}

void check(int *p)
{
	int i;
	printf("They are fail-");
	for(i=0;i<5;i++)
		if (p[i]<60)
			printf("%d ",p[i]);
		printf("\n");
}

//02 void指针类型
/*
int a=3;
//定义a为整型变量
int *p1= &a;
//p1指向int型变量
char *p2;
//p2指向char型变量
void *p3;
//p3为无类型指针变量(基类型为void型)
p3=(void *)pl;
//将p1的值转换为void #类型,然后赋值给p3
p2= (chart *)p3; .
//将p3的值转换为char.类型,然后赋值给p2
print("%d",*pl);
//合法,输出a的值
p3=&a;printf("%d",*p3);
//错误,p3是无指向的,不能指向a
*/
