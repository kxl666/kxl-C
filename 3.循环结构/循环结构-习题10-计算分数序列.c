#include <stdio.h>
//计算1/2,3/2,5/3,8/5,13/8,21/13......
//这种题主要找规律,还是利用到中间数赋值
int main()
{	
	int i,n=20;
	double a=2,b=1,s=0,t;
	for (i=1;i<=n;i++)
	{
		s=s+a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("sum=%16.10f\n",s);
}
