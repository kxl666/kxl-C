#include <stdio.h>
//输入 you are a boy，gets 能够识别空格 如果是scanf 那么就只会识别you后面都是'\0'
int main()
{
	char string[81];
	int i,num=0,word=0;
	char c;
	gets(string); //输人一个字符串给字符数组string
	for(i=0;(c=string[i])!='\0';i++) //只要字符不是"\0’就继续执行循环
		if (c==' ') //如果是空格字符,使word置0
			word=0;
		else if (word==0) //如果不是空格字符且word原值为0
		{
			word=1; //使word置1
			num++; //num累加1,表示增加一个单词
		}
		printf("There are %d worlds in this line.\n", num);
}
