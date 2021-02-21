#include <stdio.h>

int main()
{
	void convert(int n);
	int number;
	printf("Input an integer-");
	scanf("%d",&number);
	printf("output- ");
	convert(number);
	printf("\n");
}

void convert(int n)
{
	int i;
	if ((i=n/10)!=0)
		convert(i);
	putchar(n%10+'0');
	putchar(32);
}
