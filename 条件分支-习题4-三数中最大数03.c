#include <stdio.h>

//用到偷懒语法 ( a > b ) ? a:b;
//要想到使用中间变量解决问题。
int main()
{
  int a,b,c,temp,max;
  printf("请输入三个整数:");
  scanf("%d,%d,%d",&a,&b,&c);
  max = ( a > b ) ? a:b;
  max = ( max > c ) ? max:c;
  //printf("三个数的最大值是%d\n",( (( a > b ) ? a:b) > c ) ? (( a > b ) ? a:b):c);
  printf("三个数的最大值是%d\n",max);
}
