#include <stdio.h>
#include <stdlib.h>
#define A 0
/*
标准I0提供的三种类型的缓冲模式:
-按块缓存(默认)
-按行缓存
-不缓存
*/

#if(A)
int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl01.txt","w");
	
	fputs("I Love You\n",fp);
	getchar(); //此时getchar使程序缓冲中,所以不输入字符 程序不结束那么此时文件就没有写入内容
	fclose(fp);
}
#endif


#if(!A)
int main()
{
	char buff[1024];
	memset(buff,'\0',sizeof(buff));
	setvbuf(stdout,buff,_IONBF,1024); //_IOFBF 按块缓存,_IOLBF按块缓存,_IONBF不缓存
	fprintf(stdout,"Welcome to home\n");
	fflush(stdout); //刷新缓冲区
	
	fprintf(stdout,"输出任意字符后才会显示该行字符!\n");
	getchar();
}
#endif
