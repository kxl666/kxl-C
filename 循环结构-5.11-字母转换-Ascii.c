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
		c =getchar(); //再次输入值
	}
	printf("\n");
}

