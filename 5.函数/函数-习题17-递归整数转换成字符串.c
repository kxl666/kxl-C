#include <stdio.h>

int main()
{
	void convert(int n);
	int number;
	printf("Input an integer-");
	scanf("%d",&number);
	printf("output- ");
	convert(number);
	printf("\n");
}

void convert(int n) //此函数注意，例如输入345 因为是递归所以puchar先执行最后一圈再执行第二圈，再执行第一圈!!! 不然像循环结构-【反向输出%5D】.c 会输出543了 
{
	int i;
	if ((i=n/10)!=0)
		convert(i);
	putchar(n%10+'0');
	putchar(32);
}
