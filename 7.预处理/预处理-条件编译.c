#include <stdio.h>
//预处理程序提供了条件编译的功能。可以按不同的条件去编译不同的程序部分，因而产生不同的目标代码文件。这对于程序的移植和调试是很有用的
//#define B 10
#define K 0 //这里相当于开关输入0 或 非0

int main()
{
//01 如果 (标识符) B已经被#define命令定义则对程序段1进行编译否则对程序段2进行编译
#ifdef B
#define A 10
#else
#define C 10
#endif
printf("%d\n",C);


//02 如果 (标识符) B没有被#define命令定义则对程序段1进行编译否则对程序段2进行编译
#ifndef B
#define A 10
#else
#define C 10
#endif
printf("%d\n",A);

//03 如果#if (常量表达式) 为真则执行程序段1...
#if K //与之前的注释#if(0)
printf("kxl666!!!\n");
#else
printf("kxlnnn!!!\n");
#endif
}
