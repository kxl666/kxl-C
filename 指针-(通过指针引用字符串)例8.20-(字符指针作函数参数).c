#include <stdio.h>

int main()
{	
	void copy_string(char *from,char *to);
	char *a="i am a teacher";
	char b[]="you are a student";
	char *p=b;
	printf("string a =%s\nstring b =%s\n",a,b);
	printf("\n copy string a to string b:\n");
	copy_string(a,p);
	printf("strin a=%s\nstring b=%s\n",a,b);
}

void copy_string(char *from,char *to)
{
	while(*to++=*from++); //简化
}
