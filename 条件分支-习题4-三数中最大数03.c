#include <stdio.h>

//用到偷懒语法 ( a > b ) ? a:b;
//要想到使用多个中间变量解决问题。类似打比赛,多个小组之间 "两两对决"

int main()
{
  int a,b,c,temp,max;
  printf("请输入三个整数:");
  scanf("%d,%d,%d",&a,&b,&c);
  temp = ( a > b ) ? a:b;
  max = ( temp > c ) ? temp:c;
  printf("三个数的最大值是%d\n",max);
}
