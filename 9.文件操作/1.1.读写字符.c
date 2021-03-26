#include <stdio.h>
#include <stdlib.h>
#define Swith 0

int main()
{	
	FILE *fp;
	char ch,filename[20];
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
	
#if(Swith)
	printf("please input a word which is end of crtl + Z:");
	do
	{
		ch=getchar();
		getchar(); //吸收一下回车
		if (ch!=EOF) fputc(ch,fp);
		printf("The word-%c is here which you put in:",ch);
	}while(ch!=EOF);
	
	fclose(fp);
	putchar(10); //换行符
#endif
	
#if(!Swith)
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c,",ch);
		ch=fgetc(fp); //此时的EOF不是之前那个Ctrl+z的EOF,而是fgetc读取失败的返回标准
	}
	putchar(10);
	fclose(fp);
#endif
}
