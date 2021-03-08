#include <stdio.h>

int main()
{
	void f1(char a[],char b[],char c[]);
	char yuan[]="aeiou",str01[80],str02[80]={0};
	int i,j;
	printf("please input string-");
	gets(str01);
	printf("\n");
	
	f1(yuan,str01,str02);
	printf("%s\n",str02);	
}

void f1(char a[],char b[],char c[])
{
	int i=0,j,h,n=0;
	while(b[i]!='\0')
		i++;
	for(j=0;j<i;j++)
		for(h=0;h<5;h++)
			if (b[j]==a[h])
				c[n++]=b[j];
}
