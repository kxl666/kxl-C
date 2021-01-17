#include <stdio.h>
int main()
{
	    	//01 int a=2;
		//01 float b=3.1233445f;
		//01 char c; //若不赋值给c,则输出为任意值

		char a;

		//float b=2.12;
		//double c;
		
		//char c='\0'; //输出%d还是0,而不是对应ASCII码值,而%c 是空值
		//char c='\141'; 表示八进制数141 转换为十进制数(ASCII码) 结果%c 等于a
		//char c='\x61'; 表示十六进制61 转换为十进制数(ASCII码) 结果%c 等于a
	
        	scanf("%d",&a); //输入的数据类型 得与scanf定义的数据类型一致...
		//printf("a=%c,b=%c",a,b);

		//01 c=(int)b; //赋值运算 从右至左数据转换,float b 换成 int型 b 再换成 字符型 c
		//a=b;
		printf("%c,%d",a,a); //对于浮点型数据%d会输出错误-莫名数值
		                //整型数据换成%f会输出错误,也就是低精度输出为高精度会 输出错误
		printf("\n");
		//观察02数据结果 参考scanf-result
		//猜测结论: 
		//1.输入的数据类型 得与scanf定义的数据类型一致较好
		//2.当输入数据为数值类型(即:scanf %d ,输入为数字) 在 int,char 中规则 与ASCII.c 规则一样
		//3.当输入数据为字符型(即:scanf %c,输入为字母) 
		//3.1 则在char类型中正常 即:scanf 输入g printf %d 输出103 ; printf %c 输出 g
		//3.2 而在int类型中 scanf 输入 g printf %d 输出不正确
}
