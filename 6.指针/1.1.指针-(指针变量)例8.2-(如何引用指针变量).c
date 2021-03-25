#include <stdio.h>
//改变的是主函数中指针变量的址
//如果是改变其他函数中形参指针变量的址，则不会影响主函数中形参(也就是变量)的值，因为C语言中实参变量和形参变量之间的数据传递是单向的“值传递”方式。用指针变
//量作函数参数时同样要遵循这一规则。不可能通过执行调用函数来改变实参指针变量的值,但是可以改变实参指针变量所指变量的值。


int main()
{
	int *p1,*p2,*p,a,b;
	printf("please enter two integer numbers-");
	scanf("%d,%d",&a,&b);
	p1=&a;
	p2=&b;
	if (a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("a=%d,b=%d\n",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
}
