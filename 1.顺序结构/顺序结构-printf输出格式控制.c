#include <stdio.h>

int main()
{
	int x1=4,x2=8;
	//printf("%5d%-$5d$\n",x1,x2); //【%+附加字符】 后面若不是格式字符,那么它没有作用,也就是透明了
	//输出结果     4$5d$
	//printf("%5d%-5$5d$\n",x1,x2);
	//输出结果     4$5d$
	printf("%5d%-5d$\n",x1,x2);
	//输出结果     48     $
}
