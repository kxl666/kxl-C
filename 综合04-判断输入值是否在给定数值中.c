#include <stdio.h>
int main()
{
	char ch = 0;
	char arr[] = "AEIOUaeiou"; //01数组思想
	while((ch=getchar()) != 10)
	{
		int i = 0;
		for(i=0; i<10; i++)
		{
			if(ch == arr[i]) //02
			{
				printf("Vowel\n");
				break;
			}
		}
		if(i == 10)
			printf("Consonant\n");
		getchar();//去除每个字符后的\n
	}
	return 0; }
