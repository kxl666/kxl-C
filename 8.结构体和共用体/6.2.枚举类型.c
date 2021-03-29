#include <stdio.h>
#define A 0

#if(A)
int main()
{
	enum Color {red=10,green,blue};
	enum Color rgb;
	for(rgb=red;rgb<=blue;rgb++)
		printf("rgb is %d\n",rgb);
}
#endif

#if(!A)
int main()
{
	enum Color {red,green,blue=10,yellow};
	printf("red is %d\n",red);
	printf("green is %d\n",green);
	printf("blue is %d\n",blue);
	printf("yellow is %d\n",yellow);
}
#endif
