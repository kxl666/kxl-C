#include <stdio.h>
//只要是float型 无论是在赋值时 float a=12.09 还是printf("%.1f",a/3.0) 注意除以3 也要写成3.0为好
int main()

{
	//01 float a=12;
	//02 int a=12.09;// 或 a=12;
	//03 float a=12.09;

	//printf("%f\n",a); //01 输出12.000000 
			    //02 输出0.000000
			    //03 输出12.090000
	//printf("%d\n",a); //01 输出0 ,在centos7 中输出长串数字
		            //02 输出12
			    //03 输出负的长串数字
	printf("%f\n",a);

	putchar('\n');
}    
