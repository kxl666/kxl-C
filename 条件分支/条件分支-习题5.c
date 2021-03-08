#include <stdio.h>
#include <math.h>
#define M 1000

#从键盘输人一个小于1000的正数,要求输出它的平方根(如平方根不是整数,则输出其整数部分)。要求在输人数据后先对其进行检查是否为小于1000的正数。若不是，则要求重新输人。

int main()
{
  int a,b,c,temp,max,k;
  printf("请输入一个整数");
  scanf("%d",&a);
  while(1)
  {
  if ( a > M || a < 0 )
  {
     printf("请输入一个整数");
     scanf("%d",&a);
  }
  else
	 break;
  }
  
  k = sqrt(a);
  //temp = ( a > b ) ? a:b;
  //max = ( temp > c ) ? temp:c;
  printf("平方根是%d\n",k);
}
