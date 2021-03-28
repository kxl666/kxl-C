#include <stdio.h>

int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("C:\\Users\\kxl\\Desktop\\kxl01.txt","r");
	fp2=fopen("C:\\Users\\kxl\\Desktop\\kxl02.txt","w");
	ch=getc(fp1);
	while(!feof(fp1))
	{
		putchar(ch);
		ch=getc(fp1);
	}
	
	putchar(10);
	
	rewind(fp1); //使文件位置标记返回文件开头 否则上面文件位置已经移动到文末了
	
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		putc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
}
