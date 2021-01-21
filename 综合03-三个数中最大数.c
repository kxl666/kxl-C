#include <stdio.h>
//对比条件分支-习题4-三数中最大数05.c
int main()
{
	int i=0;
	int score[3]={0};
	while(scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
	{
		int max = 0;//每一组测试，max都恢复到0
		int i = 0;
		for(i=0; i<3; i++)
		{
			if(score[i] > max)
				max = score[i];
		}
		printf("%d\n", max);
	}
	
}
