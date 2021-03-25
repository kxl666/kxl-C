#include <stdio.h>
//在指针数组的基础上,指向指针数据的指针变量
#if (1)
int main()
{
	char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	char **p;
	int i;
	for(i=0;i<5;i++)
	{
		p=name+i;
		printf("%s\n",*p); //%s 识别地址
	}	
}
#endif

#if (0)
//指针数组是存放地址的
int main()
{
	int a[5]={1,2,3,4,5};
	int *num[5]={&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **p,i;
	p=num;
	for(i=0;i<5;i++)
	{
		printf("%d",**p++); //*(*(p+0)+0) 是不是就是指向多维数组的指针只是后面没有列而已
	}
	printf("\n");
}
#endif
