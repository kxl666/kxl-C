#include <stdio.h>
#include <math.h>

int main()
{
	int num(int n);
	int a;
	printf("please input a num-");
	scanf("%d",&a);
	printf("%s\n",num(a));
}

int num(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
			break;
	}
	if (i>sqrt(n))
		return("is a prime number");
	else
		return("is not a prime number");
}
