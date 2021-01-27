/*#include <stdio.h>
int main()
{ 
	int f1=1,f2=1,f3,i; 
	printf("%12d\n%12d\n",f1,f2);
	for(i = 1; i <= 38; i++)
	{ 
		f3=f1+f2; 
		printf("%12d\n",f3);
		f1=f2;
		f2=f3;
	}
}*/

//02只用两个变量
#include <stdio.h>
int main()
{ 
	int f1=1,f2=1,i;
	for(i=1;i<=20;i++)
	{
	printf("%12d %12d",f1,f2);
	if (i%2==0) printf("\n");
	f1=f1+f2;
	f2=f2+f1;
	}
}

//03数组法 记住一点,数组一般更加方便,所以要有一个表达式会重复执行赋值的思想,在普通用法的基础上往重复执行赋值上面想
/*
int main()
{
	int f[40]={1,1},i;
	printf("%12d\n%12d\n",f[0],f[1]);
	for(i=0;i<=37;i++)
	{
		f[i+2]=f[i]+f[i+1];
		printf("%12d\n",f[i+2]);
	}
}
*/
