#include <stdio.h>

int main()
{
	char num[7]={0};
	void f1(char num[]);
	int i;
	printf("please input four numbers-");
	for(i=0;i<=3;i++)
		scanf("%c",&num[i]);
	f1(num);
}

void f1(char num[])	
{  
	char num2[7]={0};
	int i,n;
	for(i=0,n=0;i<=6,n<=6;i++,n+=2)
		num2[n]=num[i];
	for(i=1;i<=6;i+=2)
		num2[i]=32;
	for(i=0;i<=6;i++)
		printf("%c",num2[i]);
	printf("\n");
}
