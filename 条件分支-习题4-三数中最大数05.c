#include <stdio.h>
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
