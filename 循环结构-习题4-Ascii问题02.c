#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	for(;;)
	{
		ch=getch();
		if (ch==13) //判断若是ASCII码为13 也就是回车就退出 。这与getchar不同，getchar是直接判断字符，对比Ascii问题01
			break; //但是由于getch没有缓存空间的特性，所以输入一个字符就立马输出，所以即便可以判断ASCII码数字，也不适合Ascii问题01的情景
		putchar(ch);
	}

}
