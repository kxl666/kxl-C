//第一种数组稍普通思维
/*
#include <stdio.h>
int main()
{
	char arr[100] = {0};
	int i = 0;
	int count_a = 0;
	int count_b = 0;
	gets(arr);
	while(arr[i] !=  EOF)
	{
		if(arr[i] == 'A')
		{
			count_a ++;
		}
		else if(arr[i] == 'B')
		{
			count_b ++;
		}
		i++;
	}
	if(count_a > count_b)
		printf("A");
	else if(count_a < count_b)
		printf("B");
	else
		printf("E");
	return 0; 
}
*/
//第二种是第一种思维升级版
#include <stdio.h>
int main()
{
	char arr[100] = {0};
	int i = 0;
	int flag = 0; //一开始赋值为0 要注意！
	gets(arr);
	while(arr[i] != EOF)
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

//第三种获取值时稍普通思维,未用到数组
/*
#include <stdio.h>
int main()
{
	int ch = 0;
	int flag = 0;
	//如果用getchar获取了
	while(ch=getchar() !='\n' )
	{
		if(ch == 'A')
		{
			flag++;
		}
		else if(ch == 'B')
		{
			flag--;
		}
	}
	if(flag>0)
		printf("A\n");
	else if(flag<0)
		printf("B\n");
	else
		printf("E\n");
	return 0; 
}
