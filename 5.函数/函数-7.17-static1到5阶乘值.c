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

//相当于以下
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
