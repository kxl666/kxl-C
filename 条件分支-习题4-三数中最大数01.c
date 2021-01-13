#include <stdio.h>

//else if 若前一个判断成功,则不会再执行下去

int main()
{

	int a,b,c,max;
	scanf("%d,%d,%d",&a,&b,&c);
	if ( a > b && a > c )
		max = a;
	else if ( a < c )
		max = c;
	else if ( a < b )
		max = b;
	else if ( b < c )
		max = c;
	else
		max = b;	
	printf("max=%d",max);
	putchar('\n');
}
