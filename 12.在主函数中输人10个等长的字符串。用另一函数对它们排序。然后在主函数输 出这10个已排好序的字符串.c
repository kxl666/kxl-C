(1)用字符型二维数组

#include <stdio.h>
#include <string.h>

int main()
{
	void sort(char s[][6]);
	int i;
	char str[10][6];
	printf("input 10 strings-\n");
	for(i=0;i<10;i++)
		scanf("%s",str[i]);
	sort(str);
	printf("Now,the sequence is-\n");
	for(i=0;i<10;i++)
		printf("%s\n",str[i]);
}

void sort(char s[10][6])
{
	int i,j;
	char temp[10],*p=temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if (strcmp(s[j],s[j+1])>0)
			{
				strcpy(p,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);
			}
}

(2)用指向一维数组的指针作函数参数

#include <stdio.h>
#include <string.h>

int main()
{
	void sort(char (*p)[6]);
	int i;
	char str[10][6];
	char (*p)[6];
	printf("input 10 strings-\n");
	for(i=0;i<10;i++)
		scanf("%s",str[i]);
	p=str;
	sort(p);
	printf("Now,the sequence is-\n");
	for(i=0;i<10;i++)
		printf("%s\n",str[i]);
}

void sort(char (*s)[6])
{
	int i,j;
	char temp[6],*t=temp; //temp[6]指能容纳的字符个数
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if (strcmp(s[j],s[j+1])>0)
			{
				strcpy(t,s[j]); //这里是将s[j]的值赋值给temp(t)这个字符数组
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
}

(3)用指针数组处理.上题目,字符串不等长。
#include <stdio.h>
#include <string.h>

int main()
{
	void sort(char *[]);
	int i;
	char *p[10],str[10][20];
	for(i=0;i<10;i++)
		p[i]=str[i];
	printf("input 10 strings-\n");
	for(i=0;i<10;i++)
		scanf("%s",p[i]);
	sort(p);
	printf("Now,the sequence is-\n");
	for(i=0;i<10;i++)
		printf("%s\n",p[i]);
}

void sort(char *s[])
{
	int i,j;
	char *temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if (strcmp(*(s+j),*(s+j+1))>0)
			{
				temp=*(s+j);	
				*(s+j)=*(s+j+1);
				*(s+j+1)=temp;
			}
}
