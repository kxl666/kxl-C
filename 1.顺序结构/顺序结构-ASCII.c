#include <stdio.h>
int main()
{
	//尝试互换定义数据类型,观察结果区别
	//发现无影响范围(0~127)单个数字,单个字符时无区别
	//int a1,a2,c1,c2; 
	char a1,c1,c2; 
	
	//char *str = "C语言中文网"; 或 char str[] = "http://c.biancheng.net";
	//printf("%s",str);此时%s 才能输出变量
	a1=97; //现在赋值到字符比较与数值区别 发现:一般无区别
	//a1=A; 这个不行会报错,注意字符得单引号
	
	//a1='Adf'; //注意字符得单引号,不能双引号,只认最后一个f
		    //此时a1 在int,char %c 输出都是f. 
		    //此时a1 在char %d 输出是102,在int %d输出 长串数字
	c1=197; //%c在int,char 中不同系统不同结果,因此不可预料范围127~256
		//%d,int时正常输出,char时:256-197的值加负号
	c2=577; //当c2为char时,会警告溢出
		//无论int,char此时%c计算只考虑一个字节,书69
		//但是%d,int时正常输出,char时:577-256倍数的值(正值省略正号),因此256是临界点
	//printf("%s  %d",a1,a1);   //%s无法输出变量 因为此时需要涉及数组的概念
	//printf("%s  %d","a1",a1); //输出a1而不是a1变量的值
	//printf("%c  %d","a1",a1); //%c无法输出a1
	printf("%c  %d",a1,a1);
	printf("\n");
	printf("%c  %d",c1,c1);
	printf("\n");
	printf("%c  %d",c2,c2);
	printf("\n");	
}
