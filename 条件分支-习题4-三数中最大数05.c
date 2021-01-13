#include <stdio.h>

//返璞归真,别老使用嵌套,顺序执行有时反而会更简单

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
