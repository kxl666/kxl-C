#include <stdio.h>

//参考答案,牛批
//拆分思想,一化多处理。将图形上面四行分一个for,图形下面三行分一个for

int main()
{	
	int i,j,k;
	//上半部分
	for (i=0;i<=3;i++)
	{
		for (j=0;j<=2-i;j++)
			printf(" ");
		for (k=0;k<=2*i;k++)
			printf("*");
		printf("\n");
	}
	//下半部分
	for (i=0;i<=2;i++)
	{
	
		for (j=0;j<=i;j++)
			printf(" ");
		for (k=0;k<=4-2*i;k++)
			printf("*");
		printf("\n");

	}
	printf("\n");
}

/*运行结果
   *
  ***
 *****
*******
 *****
  ***
   *
*/
