#include <stdio.h>

int main()
{
	int x1=4,x2=8;
	//printf("%5d%-$5d$\n",x1,x2);
	//输出结果     4$5d$
	printf("%5d%-5d$\n",x1,x2);
	//输出结果     45     $
}
