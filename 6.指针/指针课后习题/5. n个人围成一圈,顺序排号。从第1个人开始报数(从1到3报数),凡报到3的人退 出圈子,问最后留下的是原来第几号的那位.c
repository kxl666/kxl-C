#include <stdio.h>

int main()
{
	int i,k,m,n,num[50],*p;
	printf("\nInput nunber of person-n=");
	scanf("%d",&n);
	p=num;
	for(i=0;i<n;i++)
		*(p+i)=i+1; //以1至n为序给每个人编号
	
	i=0; //i为每次循环时计数变量
	k=0; //k为按1,2,3报数时的计数变量
	m=0; //m为退出人数
	while(m<n-1) //当退出人数比n-1少时(即未退出人数大于1时)执行循环体
	{
		if (*(p+i)!=0) k++;
		if (k==3)
		{
			*(p+i)=0; //对退出的人的编号置为0
			k=0;
			m++;
		}
		i++;
		if (i==n) i=0;
	}
	while(*p==0) p++;
	printf("The last one is No.%d\n",*p);
}
