#include <stdio.h>
//改变其他函数中指针变量的值(所指代的变量名)
//注意:函数的调用可以(而且只可以)得到一个返回值(即函数值),而使用指针变量作参数,可以得到多个变化了的值。如果不用指针变量是难以做到这一点的。要善于利用指针法。


int main()
{
	void swap(int *p1,int *p2);
	int a,b;
	int *point1,*point2;
	printf("please input a and b-");
	scanf("%d,%d",&a,&b);
	point1=&a;
	point2=&b;
	if (a<b)
		swap(point1,point2);
	printf("max=%d,min=%d\n",a,b);
}

void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
