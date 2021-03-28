#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	if ((fp=fopen("ddeeeedde.txt","r"))==NULL)
	{
		fputs("打开文件失败!\n",stderr);
		exit(0);
	}
	fclose(fp);
}
