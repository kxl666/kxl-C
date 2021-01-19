#include <stdio.h>
int main()
{
	char arr[100] = {0};
	gets(arr);
	int i = 0;
	int flag = 0;
	while(arr[i] != '0')
	{
		if(arr[i] == 'A')
		{
			flag++;
		}
		else if(arr[i] == 'B')
		{
			flag--;
		}	
		i++;
	}
		if(flag>0)
			printf("A");
		else if(flag<0)
			printf("B");
		else
			printf("E");
}
