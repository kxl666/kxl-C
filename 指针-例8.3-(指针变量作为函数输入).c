#include <stdio.h>
//改变其他函数中指针变量的值(所指代的变量名)

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
