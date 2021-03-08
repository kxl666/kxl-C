#include <stdio.h>
//类似条件分支-三个数的大小顺序的方法
//步骤多！！！不如03和04以及 综合03-三个数中最大数.c

int main()
{
  int a,b,c,max;
  printf("请输入三个整数:");
  scanf("%d,%d,%d",&a,&b,&c);
  if ( a > b )
  max = a ;
  if ( a > c )
  max = a;
  if ( b > c )
  max = b;
  else
  max = c;
  printf("三个数的最大值%d\n",max);
}
