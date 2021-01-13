#include <stdio.h>
int main()
{

	int a,b,c,max;
	scanf("%d,%d,%d",&a,&b,&c);
	if ( a > b )
	{
	 if ( a > c )
	 max = a;
	 else
	 max = c;
	}
	else
	 if ( b < c )
	 max = c;
	 else 
	 max = b;	
	printf("max=%d",max);
	putchar('\n');
}
