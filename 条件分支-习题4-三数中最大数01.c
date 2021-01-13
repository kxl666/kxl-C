#include <stdio.h>
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
