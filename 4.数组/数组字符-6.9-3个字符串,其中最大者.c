#include <stdio.h>
#include <string.h>
int main()
{
	char str[3][20];
	char string[20];
	int i;
	for(i=0;i<3;i++)
		gets(str[i]); //输入时，若第一个字符串输入完毕，要回车再输入第二个字符串，因为gets会把空格当作第一个字符中
	if (strcmp(str[0],str[1])>0) //比较
		strcpy(string,str[0]); //复制
	else
		strcpy(string,str[1]);
	if (strcmp(str[2],string)>0)
		strcpy(string,str[2]);
	printf("The largest string is \n%s\n", string);
}
