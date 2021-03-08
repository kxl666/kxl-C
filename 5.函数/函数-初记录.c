#include <stdio.h>

//01float max(float a,float b); //max 在main前面不需要声明也可以,反之01 02 才起作用

float max(float a,float b)
{
	return((a>b)?a:b);	
}

int main()
{
	//02float max(float a,float b);
	float a,b;
	printf("please input float of numbers-");
	scanf("%f %f",&a,&b);
	printf("max is %f\n",max(a,max(5-2.1,b)));
}
