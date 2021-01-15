#include <stdio.h>

//求S=a+aa+aaa+... +n个a的值,其中a是一个数字,n表示a的位数，例如:2 + 22 + 222 + 2222 + 22222(此时n=5),n由键盘输入。

int main()
{	
	int a,n,i=1,sn=0,tn=0;
	printf("a,n:");
	scanf("%d,%d",&a,&n);
	
	while(i<=n)
	{
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		i++;
	}
	printf("a+aa+aaa+...=%d\n",sn);
}
