//用typedef声明新的类型名来代替已有的类型名

//有些操作系统int型是2个字节，所以需要把所有int改为 long int.这个时候有typedef就好说啦!
//总结：按定义的方式,把变量名换成 新类型名,并且在最前面加typedfe.

//01定义整型
#include <stdio.h>

typedef int In;

int main()
{	
	In i=1;
	int j=2;
	printf("%d,%d\n",i,j);
}


//02定义结构体类型
#include <stdio.h>

typedef struct
{
	int month;
	int day;
	int year;
}Date;

int main()
{	
	Date date;
	date.month=12;
	date.day=23;
	date.year=2021;

	printf("%d-%d-%d\n",date.month,date.day,date.year);
}

//也可以既typedef 与 struct+结构体名 并存
/*
typedef struct date_01
{
	int month;
	int day;
	int year;
}Date;

int main()
{	
	struct date_01 date01;
	date01.day=56;

	Date date;
	date.month=12;
	date.day=23;
	date.year=2021;
	
	printf("%d-%d-%d\n",date.month,date.day,date.year);

	printf("%d\n",date01.day);
}
*/



//03定义整型数组
#include <stdio.h>

typedef int Num[5];

int main()
{	
	Num a; //但是不能 a={1,2,3,4,5}
	a[2]=2;
	printf("%d\n",a[2]);
}


//04定义字符指针
#include <stdio.h>

typedef char * p;

int main()
{	
	p p1;
	p1="I love you";
	printf("%s\n",p1);
}


//05定义指向函数的指针
#include <stdio.h>
typedef void (*P)();

void fun();
int main()
{
	P p1;
	p1=fun;
	(*p1)(); //=p1()
}

void fun()
{
	printf("I Lve You!\n");
}

//06定义指向多维数组的指针
int (*p)[3];
typedef int (*P)[3];

//07指针数组的指针函数
int *(*array[3])(int);
typedef int (*P)(int);
调用: P array[3];

//08
