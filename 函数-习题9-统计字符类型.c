#include <stdio.h>

int letter,dig,spa,oth;
int main()
{
	void f1(char str[]);
	char str[80];
	printf("please input a series of string:");
	gets(str);
	f1(str);
	printf("字母-%d\n",letter);
	printf("数字-%d\n",dig);
	printf("空格-%d\n",spa);
	printf("其他字符-%d\n",oth);
}

void f1(char str[])
{
	int i;
	char c;
	for(i=0;(c=str[i])!='\0';i++)
		if ( c >='A' && c <='Z' || c >='a' && c <='z' )
			letter++;
		else if ( c >='0' && c <='9' )
			dig++;
		else if ( c ==' ')
			spa++;
		else
			oth++;
}
