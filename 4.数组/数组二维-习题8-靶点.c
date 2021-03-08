#include <stdio.h>
//元素在该行上最大,在该列上最小,也可能没有
#define N 4
#define M 5

int main()
{
	int i,j,k,a[N][M],max,maxj,flag;
	printf("please input matrix-\n");
	for(i=0;i<N;i++) //输入数组
		for(j=0;j<M;j++)
			scanf("%d",&a[i][j]);
		
		for(i=0;i<N;i++)
		{
			
			max=a[i][0];
			maxj=0;
			for(j=0;j<M;j++) //找出i行中最大数
				if (a[i][j]>max)
				{
					max=a[i][j];
					maxj=j; //将最大数的列号存在maxj
				}
				
				flag=1; //先假设是靶点
				
				for(k=0;k<N;k++)
					if (max>a[k][maxj])
					{
						flag=0;
						continue;
					}
					
					if (flag)
					{
						printf("a[%d][%d]=%d\n",i,maxj,max);
						break;
					}
		}
		
		if (!flag)
			printf("It is not exist!\n");
}



