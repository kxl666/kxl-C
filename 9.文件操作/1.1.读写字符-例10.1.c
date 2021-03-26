#include <stdio.h>
#include <stdlib.h>

int main()
{	
	FILE *fp;
	char ch,filename;
	//printf("please input filename:");
	//scanf("%s",&filename);
	if (fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","a+"))
	{
		printf("The text has been exiting!\n");
		system("pause"); //暂停一下
	}
	else
	{
		printf("No wonderful!\n");
		exit(0);
	}
	
	printf("please input a word which is end of crtl + Z:");
	do
	{
		ch=getchar();
		getchar(); //吸收一下回车
		fputc(ch,fp);
		printf("The word-%c is here which you put in:",ch);
	}while(ch!=EOF);
	
	fclose(fp);
	putchar(10); //换行符
}
