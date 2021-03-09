#include <stdio.h>

int main()
{	
	char str[14];
	str[0]='i'; //ok
	str="i love you!"; //ko
	
	char *a;
	a="i love you!"; //ok
	
	char *a;
	scanf("%s",a); //ko 因为指针a并没有指向一个确定地址
	
	char *a,str[10];
	a=str;
	scanf("%s",a); //ok
	printf("%c",a[1]); //ok
	
	char *a="i love me";
	a=a+7;
	printf("%s\n",a); //ok 指针变量a的值是可以变化的
	
	char str[]="i love me";
	str=str+7;
	printf("%s",str); //ko 因为数组名虽然代表地址,但它是常量,它的值是不能改变的
	
	char a[]="home;
	char *b="home";
	a[2]='r'; //ok
	b[2]='r'; //ko 字符指针变量指向的字符串常量中的内容是不可以被取代的(不能对它们再赋值)
		  //因为此时指针b在date静态存储区
	
	char *format;
	format="a=%d,b=%f\n"; //format若是字符数组则不行
	printf(format,a,b); //ok 可变格式输出函数
}
