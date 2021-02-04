#include <stdio.h>

int main()
{
	char s1[80],s2[40];
	int i=0,j=0;
	printf("Input string1-");
	scanf("%s",s1);
	printf("Input string2-");
	scanf("%s",s2);
	
	while(s1[i]!='\0')
		i++; //记录s1元素个数
	while(s2[j]!='\0')
		s1[i++]=s2[j++]; //从s1最后一个元素开始赋值
	s1[i]='\0'; //s1最后一个元素为'\0'
	printf("\nThe new string is-%s\n",s1);	
}
