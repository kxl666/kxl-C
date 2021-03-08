#include <stdio.h>

//03的展开形式
//要想到使用中间变量解决问题

int main()
{
  int a,b,c,max;
  printf("请输入三个整数:");
  scanf("%d,%d,%d",&a,&b,&c);
  if ( a > b )
	  max = a;
  else
	  max = b;

  if ( max < c )
	  max = c;
	
  printf("三个数的最大值是%d\n",max);
}
