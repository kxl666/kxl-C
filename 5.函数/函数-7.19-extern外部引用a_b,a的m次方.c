//file01
#include <stdio.h>

int A;
int main()
{
	//int power(int);
	int b=3,m;
	printf("please input number a and ints power n-");
	scanf("%d %d",&A,&m);
	printf("%d*%d=%d\n",A,b,A*b);
	printf("%d**%d=%d\n",A,m,power(m));
}

//file02
#include <stdio.h>

extern A;

int power(int n)
{
	int i,y=1;
	for(i=1;i<=n;i++)
		y*=A;
	return(y)
