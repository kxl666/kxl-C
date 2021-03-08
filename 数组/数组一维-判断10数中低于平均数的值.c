#include <stdio.h>
int main()
{
	int i,j,sum;
	char a[10];
	for(i=0,sum=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	sum+=a[i];
	}
	for(i=0;i<5;i++)
	{
	if(a[i]<(sum/5))
	printf("%d\n",a[i]);
	}
}
