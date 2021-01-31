#include <stdio.h>

//else if 若前一个判断成功,则不会再执行下去

int main()
{

	int a,b,c,max;
	scanf("%d,%d,%d",&a,&b,&c);
	if ( a > b && a > c )
		max = a;
	else if ( b > a && b > c )
		max = b;
	else if ( c > a  && c > b )
		max = c;
	printf("max=%d",max);
	putchar('\n');
}
