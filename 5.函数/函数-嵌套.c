#include <stdio.h>
#define c 3

int squ(int );
int fac(int );

int main()
{
	int i,s=0;
	for(i=2;i<=c;i++)
	{
		s=s+squ(i);
	}
	printf("%d\n",s);
}

int squ(int i)
{
	int q1,result;
	q1=i*i;
	result=fac(q1);
	return(result);
}

int fac(int q1)
{
	int i,s=1;
	for(i=1;i<=q1;i++)
		s*=i;
	return(s);
}
