#include <stdio.h>
int main()
{ 
	int i, j;
	double item, sum; 
	sum = 0;
	for(i = 1; i <= 100; i++)
	{ 
		item = 1; 
		for (j = 1; j <= i; j++) 
			item = item * j;
		sum = sum + item; 
	}
	printf("= %e \n ", sum); 
}
