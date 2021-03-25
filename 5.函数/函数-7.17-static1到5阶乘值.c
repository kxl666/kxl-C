#include <stdio.h>

int fac(int n)
{
	static int f=1;
	f=f*n;
	return(f);
}

int main()
{
	int fac(int n);
	int i;
	for(i=1;i<=5;i++)
	printf("%d!=%d\n",i,fac(i));
}

//相当于以下01
#if(0)
#include <stdio.h>

int main()
{
	int s=1,i;
	for(i=1;i<5;i++)
	{
		s*=i;
		printf("%d\n",s);
	}
}
#endif

//相当于以下02
#if(0)
int fac(int n)
{
	int f;
	if (n<0)
		printf("error !");
	else if (n==0 || n==1)
		f=1;
	else
	{		
		f=fac(n-1)*n;
		printf("%d\n",f); //多了这行 对比函数-7.7-递归-计算 !n.c
	}
	return f;
}

int main()
{
	int fac(int n);
	int n,y;
	printf("please input an number-");
	scanf("%d",&n);
	y=fac(n);
	printf("%d!=%d\n",n,y);
}
#endif
