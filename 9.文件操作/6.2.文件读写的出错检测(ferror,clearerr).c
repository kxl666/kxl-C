#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl01.txt","r"))==NULL) //只读
	{
		fputs("打开文件失败!\n",stderr);
		exit(0);
	}
	
	fputc('F',fp); //试图向只读文件写入字符
	if (ferror(fp)) //检测文件是否错误
	fputs("出错啦!01\n",stderr);

	clearerr(fp); //清除以上错误 所以ferror 为假
	if (ferror(fp))
	fputs("出错啦!02\n",stderr);

	fclose(fp);
}
