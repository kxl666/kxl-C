#include <stdio.h>

//输出所有的“水仙花数”,所谓“水仙花数”是指一个3位数,其各位数字立方和等于该数本身。例如,153是一-水仙花数,因为153=1*1*1+5*5*5+3*3*3.

int main()
{	
	int i,j,k,n;
	printf("The number are ");
	for (n=100;n<=1000;n++)
	{
		i=n/100; //百位数
		j=n/10-i*10; //十位数
		k=n%10; //个位数
		if (n==i*i*i+j*j*j+k*k*k)
			printf("%d\t",n);
	}
	printf("\n");
}
