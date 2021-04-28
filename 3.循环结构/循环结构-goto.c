#include <stdio.h>
#include <math.h>
int main()

{
	int i,sum=0;
	i=1;
loop:	if(i<=100)
		{
			sum+=i;
			i++;
			goto loop;
		}
		printf("%d\n",sum);
}  

#if( 0 )
这是注释信息
#endif
