//file01
#include <stdio.h>

int main()
{
	void enter_string(char str[]);
	void delete_string(char str[],char ch);
	void print_string(char str[]);
	
	char c,str[80];
	enter_string(str);
	scanf("%c",&c);
	delete_string(str,c);
	print_string(str);
}

//file02
void enter_string(char str[80])
{
	gets(str);
}

//file03
void delete_string(char str[],char ch)
{
	int i,j;
	for(i=j=0;str[i]!='\0';i++)
		if (str[i]!=ch)
			str[j++]=str[i];
		str[j]='\0';
}

//file04
void print_string(char str[])
{
	printf("%s\n",str);
}
