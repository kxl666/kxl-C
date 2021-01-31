#include <stdio.h>
int main()
{
	int i=0,y=0,n,max;
	int score[40]={0};
	printf("几个数值:");
	scanf("%d",&n);
	for(;i<n;i++)
	scanf("%d",&score[i]);
	for(i=0; i<n; i++)
	{
		if(score[i] > max)
		max = score[i];
	}
	printf("The max =%d\n", max);
	
}
