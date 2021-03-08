#include <stdio.h>

int main()
{
	void f1(char b[],char n);
	char i,a[80],n=0;
	printf("请输入字符串-");
	gets(a);
	while(a[n]!='\0')
		n++;
	f1(a,n);
	printf("\n调整后的字符串-%s\n",a);
}

void f1(char a[],char n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;	
	}
}
