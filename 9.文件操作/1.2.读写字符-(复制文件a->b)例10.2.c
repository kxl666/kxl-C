#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * in,* out;
	char ch,infile[]="C:\\Users\\kxl\\Desktop\\kxl01.txt",outfile[]="C:\\Users\\kxl\\Desktop\\kxl02.txt";
	/*
	printf("please input infilename:");
	scanf("%s",&infile);
	printf("please input outfilename:");
	scanf("%s",&outfile);*/
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("isn't exit %s\n",infile);
		exit(0);
	}
	
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("isn't exit %s\n",outfile);
		exit(0);
	}
	
	ch=fgetc(in);
	while(!feof(in)) //=(ch!=EOF) fgetc读取失败的返回标准
	{
		fputc(ch,out);
		putchar(ch);
		ch=fgetc(in);
	}
	putchar(10);
	fclose(in);
	fclose(out);
}
