#include <stdio.h>
//用到数组
int main()
{
	char arr[100] = {0};
	int i = 0;
	int flag = 0; //一开始赋值为0 要注意！
	gets(arr);
	while(arr[i] != '0')
	{
		if(arr[i] == 'A')
		{
			flag++; //02在循环体内部对同一个值++或-- 这个思维要记忆
		}
		else if(arr[i] == 'B')
		{
			flag--; //03
		}	
		i++;
	}
		if(flag>0) //04 最后判断flag值是否为0
			printf("A");
		else if(flag<0)
			printf("B");
		else
			printf("E");
}
