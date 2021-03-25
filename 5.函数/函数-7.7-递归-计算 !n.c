#include <stdio.h>
/*程序中不应出现这种无终止的递归调用,而只应出现有限次数的、有终止的递归调用,
这可以用if语句来控制，只有在某一条件成立时才继续执行递归调用;否则就不再继续。*/

int fac(int n)
{
	int f;
	if (n<0)
		printf("error !");
	else if (n==0 || n==1)
		f=1;
	else
		f=fac(n-1)*n;
	return f;
}

int main()
{
	int fac(int n);
	int n,y;
	printf("please input an number-");
	scanf("%d",&n);
	y=fac(n);
	printf("%d!=%d\n",n,y);
}
