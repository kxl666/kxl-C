#include <stdio.h>
//所以说用else if 比较笨但简单，把所有情况列出来即可
int main()
{

	int a,b,c,max,min;
	scanf("%d,%d,%d",&a,&b,&c);
	if ( a > b && a > c && b > c )
	{
	max = a;
	min = c;
	}
	else if ( a > b && a > c && b < c )
	{
	max = a;
	min = b;
	}
	else if ( a > b && a < c && b < c )
	{
	max = c;
	min = b;
	}
	else if ( a < b && a > c && b > c )	
	{
	max = b;
	min = c;
	}
	else if ( a < b && a < c && b < c )
	{
	max = c;
	min = a;
	}
	else if ( a < b && a < c && b > c )
	{
	max = b;
	min = a;	
	}
	printf("max=%d,min=%d",max,min);
	putchar('\n');
}
