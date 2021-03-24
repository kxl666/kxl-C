#include <stdio.h>
#include <math.h>
//注意在循环中,值会不断被覆盖!!!虽然知道,但是还是易忽略
//最小公倍数等于两数之积除以其最大公约数
int main()
{	
	int i,j,m,g,h,s,x;
	scanf("%d,%d",&i,&h);
	for (j=1,g=1;j<=sqrt(i),g<=sqrt(h);j++,g++)
	{	
		if (i%j==0)
			m = j;
		if (h%g==0)
			s = g;
		if (m==s)
			x=m;	
	}
	printf("最大公约数是:%d\n",x);
	printf("最小公倍数是:%d\n",i*h/x); //容易忽略,printf 可以直接运算
}
