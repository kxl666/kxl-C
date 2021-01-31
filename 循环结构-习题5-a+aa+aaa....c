#include <stdio.h>

//求S=a+aa+aaa+... +n个a的值,其中a是一个数字,n表示a的位数，例如:2 + 22 + 222 + 2222 + 22222(此时n=5),n由键盘输入。

int main()
{	
	int a,n,i=1,sn=0,tn=0;
	printf("a,n:");
	scanf("%d,%d",&a,&n);
//此题类似循环结构-习题10-计算分数序列.c
//[找规律] 以及 [循环赋值概念]
//这种a有初值的sn这种加会放在a循环赋值表达式的前面
	while(i<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		i++;
	}
	printf("a+aa+aaa+...=%d\n",sn);
}
