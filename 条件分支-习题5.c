#include <stdio.h>
#include <math.h>
#define M 1000
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
