#include <stdio.h>
#define M 10

int main()
{
	static int a[M]={-12,0,6,16,23,56,80,100,110,115}; //一个程序在编译运行的时候，普通变量是存放在栈区，
	//此数组为有序排列                                 //我们还会学习堆，而这个static会使得变量存放在data
	//我们整个内存主要分为四大区:CODE，DATA，STACK ,HEAP
	int n,low,mid,high,found;
	low=0;
	high=M-1;
	found=0;
	printf("please input a num:");
#if (0)
	do
	{
		scanf("%d",&n);
		getchar();
	}while(n<a[0] || n>a[M-1]);
#endif
	
	while(scanf("%d",&n) !=1) //EOF:非法输入 0:没有输入
		//数值数组默认初始化为0,字符数组默认初始化为\0
	{
		printf("illegal input:");
		getchar();
	}
	while(low<=high)
	{
		mid=(low+high)/2;
		if (n==a[mid])
		{
			found=1;
			break;
		}
		else if (n>a[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	if (found==1)
		printf("The index of %d is %d\n",n,mid);
	else
		printf("There is not %d\n",n);
}
