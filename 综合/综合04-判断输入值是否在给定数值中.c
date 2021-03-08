#include <stdio.h>
//再次说明getchar有缓冲区,一直输入它就一直存着输入数据,然后在循环中把数据一个一个执行，直到最后一个输入为回车。 但是循环体末尾有getchar(); 它会 输入一个值回车后显示结果然后再输入...
//因为getchar()会吸收第二个字符，所以输入a和回车，它会吸收回车字符，循环还会继续，继续等待输入。还有一个现象是连着输入奇数个字符循环会继续，反之执行完后会退出循环，程序执行结束
//参考 循环结构-5.11-字母转换-Ascii.c 和 循环结构-习题4-Ascii问题01
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
