#include <stdio.h>

int main()
{	
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int b[4]={1,3,5,7};
	int (*p)[4],i,j; //p指向包含4个整型元素的一维数组的指针变量
	int (*q)[4]; //q指向包含4个元素的一维数组的指针变量
	p=a;
	q=&b; //表示q指向一维数组(行)
	printf("please enter row and colum-");
	scanf("%d,%d",&i,&j);
	printf("a[%d,%d]=%d\t%d\n",i,j,*(*(p+i)+j),(*(p+i))[j]); //(*(p+i))[j]=p[i][j]
	printf("%d\n",(*q)[j]); //(*q)[j]是p所指向的行中序号为j的元素=q[0][j]
}
