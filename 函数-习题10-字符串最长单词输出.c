#include <stdio.h>
#include <string.h>

int maxj,y;
void f1(char str[]);
int main()
{
	char str[80]={0};
	gets(str);
	f1(str);
}

void f1(char str[])
{
	int i,k=0,j=0,max;
	char num[80][80]={0},c;
	for(i=0;(c=str[i])!='\0';i++)
		if (c!=' ')
		{
			num[j][k++]=str[i];
		}
		else
		{
			j++;
			k=0;
		}
		max=strlen(num[0]);
		for(y=0;y<=j;y++)
		{
			if (strlen(num[y])>max)
			{
				max=strlen(num[y]);
				maxj=y;
			}
		}
		printf("%s\n",num[maxj]);
}
