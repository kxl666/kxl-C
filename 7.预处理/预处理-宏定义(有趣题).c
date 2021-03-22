#include <stdio.h>
#define A(x) x;x;x;x;x;x;x;x;x;x;
//输出0-999

int main()
{
	int n=0;
	A(A(A(printf("%d\n",n++))));
}

