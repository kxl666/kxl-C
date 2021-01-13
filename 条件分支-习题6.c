#include <stdio.h>

/*有一个函数:
y = x (x < 1)
y = 2x - 1 (1 << x < 10)
y = 3x -1 (x >= 10)
*/
int main(){
	int x,y;
	printf("please input x:");
	scanf("%d",&x);
	if ( x < 10 )
	{
	 if ( x >= 1 )
	  y = 2*x-1;
	 else
	  y = x;
	}
	else
	 y = 3*x-11;
	printf("y=%d",y);
	printf("\n");
}


