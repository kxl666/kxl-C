#include <stdio.h>
int main()
{
  int a,b,c,temp,max;
  printf("请输入三个整数:");
  scanf("%d,%d,%d",&a,&b,&c);
  if ( a > b )
	  temp = a;
  else
	  temp = b;

  if ( temp > c )
	  max = temp;
  else
	  max = c;
  printf("三个数的最大值是%d\n",max);
}
