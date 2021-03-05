#include <stdio.h>
//改变的是主函数中指针变量的址
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
		p2=p1;
	}
	printf("a=%d,b=%d\n",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
}
