#include <stdio.h>
int main()
{
	int n = 0,i = 0,j = 0;
	int score[40] = {0};
	scanf("%d", &n); //输入有几个数字
	for(i=0; i<n; i++) //开始输入，输入完再继续执行
	{
		scanf("%d", &score[i]);
	}
	//对所有数字排序-冒泡排序！！！来回比较，是 条件分支-三个数的大小顺序 的升级版
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(score[j] < score[j+1])
			{
				int tmp = score[j];
				score[j] = score[j+1];
				score[j+1] = tmp;
			}
		}
	}
	
	for(i=0; i<n; i++) //最后一个一个输出数组值
	{
		printf("%d ", score[i]);
	}
	printf("\n");
	return 0; 
}
