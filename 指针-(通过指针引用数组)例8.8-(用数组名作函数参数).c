#include <stdio.h>

int main()
{
	void inv(int *x,int n);
	int i,a[10]={3,7,9,11,0,6,7,5,4,2},*p=a;
	printf("The original array-\n");
	for(i=0;i<10;i++,p++)
		printf("%d",*p);
	printf("\n");
	p=a;
	inv(p,10);//inv(a,10);
	printf("The array has been inverted-\n");
	//for(i=0;i<10;i++)
	//	printf("%d",a[i]);
	for(;p<a+10;p++)
		printf("%d",*p);
	printf("\n");
}

void inv(int *x,int n)
{
	int *p,temp,*i,*j,m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;
	for(;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}
