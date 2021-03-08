#include <stdio.h>
//是 数组二维-二分法求输入数值的下标.c 的升级版
#define N 15

int main()
{
	int i,number,top,bott,mid,loca,a[N],flag=1,sign;
	char c;
	printf("Enter data-\n"); //输入第一个数
	scanf("%d",&a[0]);
	i=1;
	
	while(i<N) //检查数是否已输入完毕
	{
		scanf("%d",&a[i]);
		if (a[i]>=a[i-1]) //如果输入的数不小于前一个数
			i++;
		else
			printf("Enter this data again\n");
	}
	
	printf("\n");
	for(i=0;i<N;i++) //输出15个数
		printf("%5d",a[i]);
	printf("\n");
	
	while(flag)
	{
		printf("Input number to look for-"); //输入需要查询的数
		scanf("%d",&number);
		sign=0; //sign=为0 表示找不到
		top=0; //区间起始位置
		bott=N-1; //区间末尾位置
		if ((number<a[0])||(number>a[N-1])) //要查的数不在区间内
			loca=-1; //表示找不到
		
		while((!sign)&&(top<bott))
		{
			mid=(bott+top)/2;
			if (number==a[mid])
			{
				loca=mid;
				printf("Has found %d,its position is %d\n",number,loca+1); //+1是习惯1开始算起
				sign=1; //表示找到了
			}
			else if (number<a[mid])
				bott=mid-1;
			else
				top=mid+1;
		}
		
		if (!sign||loca==-1)
			printf("cannot find %d \n",number);
		printf("Continue or not(Y/N)?");
		scanf(" %c",&c);
		if (c=='N'||c=='n')
			flag=0;
	}	
}



