#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	int i=0;
	char str[40];
	fp=fopen("C:\\Users\\kxl\\Desktop\\test.txt","w");
	
	while((str[i]=getchar())!='!')
	{
		if (str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
			fputc(str[i],fp);
		i++;
	}
	fclose(fp);

	fp=fopen("C:\\Users\\kxl\\Desktop\\test.txt","r");
	fgets(str,strlen(str),fp);
	printf("%s\n",str);
	fclose(fp);
}
