#include <stdio.h>

int main()
{
	void f1(int number[][3]);
	int num[3][3],i,j;
	printf("please input a series of num-\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d",&num[i][j]);
		f1(num);
}

void f1(int number[][3])
{
	int i,j,nember[3][3];
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			nember[j][i]=number[i][j];
		
		for(i=0;i<=2;i++)
		{
			printf("\n");
			for(j=0;j<=2;j++)
			{
				printf("%d\t",nember[i][j]);		
			}
			printf("\n");
		}
}

/*02不需要借助第二个数组，参考指针课后练习题9
#include <stdio.h>

int main()
{
	void f1(int number[][3]);
	int num[3][3],i,j;
	printf("please input a series of num-\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			scanf("%d",&num[i][j]);
		f1(num);
}

void f1(int number[][3])
{
	int i,j,nember[3][3],t;
	for(i=0;i<=2;i++)
		for(j=1;j<2;j++)
		{
			t=number[i][j];
			number[i][j]=number[j][i];
			number[j][i]=t;
		}
		
		for(i=0;i<=2;i++)
		{
			printf("\n");
			for(j=0;j<=2;j++)
			{
				printf("%d\t",number[i][j]);		
			}
			printf("\n");
		}
}
*/
