#include <stdio.h>

int main()
{
	int i,a[10],*p=a;
	printf("please enter 10 integer numbers-");
	for(i=0;i<10;i++)
		scanf("%d",p++);
	p=a; //如果这里不重新使p指向a[0]输出莫名,因为经过上个for p的值已经是a数组最后一个元素的地址了,此时输出p++不就奇了怪了吗？
	for(i=0;i<10;i++,p++)
		printf("%d",*p);
	printf("\n");
}
