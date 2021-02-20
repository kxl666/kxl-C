#include <stdio.h>

int main()
{
	int maxg(int a,int b);
	int ming(int a,int b,int c);
	int a,b;
	printf("please input a and b-");
	scanf("%d,%d",&a,&b);
	printf("The maxg is %d\n",maxg(a,b));
	printf("The ming is %d\n",ming(a,b,maxg(a,b)));
}

int maxg(a,b)
{
	int i,j,m,s,x;
	for (i=1,j=1;i<=a,j<=b;i++,j++)
	{	
		if (a%i==0)
			m = i;
		if (b%j==0)
			s = j;
		if (m==s)
			x=m;
	}
	return(x);
}

int ming(int a,int b,int c)
{
	return(a*b/c);
}
