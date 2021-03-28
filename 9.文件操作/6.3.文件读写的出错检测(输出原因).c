#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	FILE *fp;
	if ((fp=fopen("kgggg.txt","r"))==NULL)
	{
		//printf("打开文件失败!原因是: %d\n",errno); //返回错误值 查文档才知道含义
		//perror("打开文件失败,原因是"); //比较直观的显示原因
		fprintf(stderr,"出错了,原因竟然是-> %s <- 这个\n",strerror(errno)); //原因可以出现在自定义位置
		exit(0);
	}
	
	fclose(fp);
}
