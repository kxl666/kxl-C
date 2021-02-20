#include <stdio.h>

int main()
{
	void f1(char a[],char b[]);
	char a[80],b[80];
	printf("please input string01-");
	gets(a);
	printf("\n");
	printf("please input string02-");
	gets(b);
	printf("\n");
	f1(a,b);
	printf("now -%s\n",a);
}

void f1(char a[],char b[])
{
	int i=0,j=0;
	while(a[i]!='\0')
		i++;	
	while(b[j]!='\0')
		a[i++]=b[j++];
	a[i]='\0';
}
