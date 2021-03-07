#include <stdio.h>
//01通过数组下标找出元素的值
//02通过数组名计算数组元素地址,找出元素的值
int main()
{
	int a[10];
	int i;
	printf("please enter 10 integer number-");
	for(i=0;i<10;i++)
		scanf("%d,&a[i]"); //a+i与&a[i]等价
	for(i=0;i<10;i++)
		printf("%d",*(a+i)); //通过数组名和元素序号计算元素地址,再找到该元素
	printf("\n");
}

/*03用指针变量指向数组元素
int main()
{
	int a[10];
	int i;
	printf("please enter 10 integer number-");
	for(i=0;i<10;i++)
		scanf("%d,&a[i]");
	for(p=a;p<(a+10);p++) //for(p=a;a<(p+10;a++); printf("%d",*a);是不行的,因为数组名a代表数组首元素的地址,它是一个指针型常量,它的值在程序运行期间是固定不变的。既然a是常量,所以a++是无法实现的。
		printf("%d",*p); //用指针指向当前的数组元素
	printf("\n");
}
