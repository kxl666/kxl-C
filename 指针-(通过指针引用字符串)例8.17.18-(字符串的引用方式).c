#include <stdio.h>

int main()
{	
	char *string="i love you!"; //只是把"i love you!"的第1个字符的地址赋给指针变量string
								//string是字符变量,C语言没有字符串变量
	printf("%s\n",string);
  
}

/*
int main()
{	
	char a[]="i am a student",b[20];
	int i;
	for(i=0;*(a+i)!='\0';i++)
		*(b+i)=*(a+i);
	*(b+i)='\0';
	printf("string a is-%s\n",a);
	printf("string b is-");
	for(i=0;b[i]!='\0';i++)
		printf("%c",b[i]);
	printf("\n");
}
*/
