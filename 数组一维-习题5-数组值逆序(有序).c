#include <stdio.h>
//解:解此题的思路是以中间的元素为中心,将其两侧对称的元素的值互换即可
#define N 5

int main()
{
	int a[N],i,temp;
	printf("请输入数组值-");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("现在的数组值-\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	
	for(i=0;i<N/2;i++)
	{
		temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;	
	}
	
	printf("\n调整后的数组值-\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	printf("\n");
}



