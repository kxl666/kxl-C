#include <stdio.h>
#include <stdlib.h>

int main()
{	
	void check(int *);
	int *p1,i;
	p1=(int *)malloc(5*sizeof(int)); //(int *)强制转换,因为malloc函数是void型,(int *)可省略因为因为在进行编译时,系统可以自动进行隐式的转换
	for(i=0;i<5;i++)
		scanf("%d",p1+i);
	check(p1);
}

void check(int *p)
{
	int i;
	printf("They are fail-");
	for(i=0;i<5;i++)
		if (p[i]<60)
			printf("%d ",p[i]);
		printf("\n");
}
