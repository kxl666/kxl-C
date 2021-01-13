#include <stdio.h>
int main(){
	int x,y;
	printf("please input x-");
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


