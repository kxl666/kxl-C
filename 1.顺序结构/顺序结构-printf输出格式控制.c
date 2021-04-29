#include <stdio.h>

int main()
{
	int x1=4,x2=8;
	int x=0177;
	printf("x=%-3d,x=%-6d,x=$%-06d,x=$%06d,x=%%06d\n",x,x,x,x,x);
	//输出结果x=127,x=127   ,x=$127   ,x=$00017,x=%06d
	//printf("%5d%-$5d$\n",x1,x2); //【%+附加字符】 后面若不是格式字符,那么它没有作用,也就是透明了
	//输出结果     4$5d$
	//printf("%5d%-5$5d$\n",x1,x2);
	//输出结果     4$5d$
	printf("%5d%-5d$\n",x1,x2);
	//输出结果     48     $
	
}
