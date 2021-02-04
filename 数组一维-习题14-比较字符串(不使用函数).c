#include <stdio.h>
#include <string.h>

int main()
{
	int i,resu;
	char s1[100],s2[100];
	printf("Input string1-");
	gets(s1);
	printf("Input string2-");
	gets(s2);
	i=0;
	while((s1[i]==s2[i]) && (s1[i]!='\0'))
		i++;
	if (s1[i]=='\0' && s2[i]=='\0')
		resu=0;
	else
		resu=s1[i]-s2[i];
	printf("\nresult=%d\n",resu);
}
