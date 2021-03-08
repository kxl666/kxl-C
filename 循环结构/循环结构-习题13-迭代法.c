#include <stdio.h>
#include <math.h>
//迭代法求x=根号a 
int main()
{
	float a,x0,x1;
	printf("enter a positive number-");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	while(fabs(x0-x1)>=1e-5)
	{
		x0=x1;
		x1=(x0+a/x0)/2;
	}
	printf("The square root of %5.2f is %8.5f\n",a,x1);
}
