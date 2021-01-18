#include <stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	while(n) //比如123 先输出取余数，再除以10取整,直到取整为0则为假循环终止
	{
	printf("%d",n%10);
	n/=10;
	}
	putchar('\n');
}
