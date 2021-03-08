#include <stdio.h>
#include <math.h>

int main()
{
	
	char c;
	while ((c=getchar()) != '\n') //括号内 判断表达式
	{
		if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
		{
			if ((c>='W' && c<='Z') || (c>='w' && c<='z'))
			c=c-22;
			else
			c=c+4;
		}
		printf("%c\n",c);
		c =getchar(); //再次输入值 这个执行现象是输入一个返回一个 
		              //若注释这一行 可以输入多个值 参考循环结构-习题4-Ascii问题01
	}
	printf("\n");
}

