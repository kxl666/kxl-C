#include <stdio.h>
int main()
{

	int a,b,c,max,min;
	scanf("%d,%d,%d",&a,&b,&c);
	if ( a > b )
	{	
	 max = a;
	 min = b;
	 if ( a > c  &&  b > c )
	 min = c;
	 else
	 min = b;
	 if ( a < c )
	 max = c;  
	}
	else
	{
	 if ( b < c )
	 {
	  max = c;
	  min = a;
	 }
	 else
	 {
	  if ( a > c )
	  {
	  max = b;
	  min = c;
	  }
	 }
	}
	
	
	printf("max=%d,min=%d",max,min);
	putchar('\n');
}
