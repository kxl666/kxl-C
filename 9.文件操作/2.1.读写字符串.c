#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main()
{
	FILE *fp;
	char buffer[MAX];
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","w"); //这里就不需要if因为无论文件存不存在它都是真,有没有都会会重新创建
	
	fputs("I\n",fp);
	fputs("Love\n",fp);
	fputs("You\n",fp); //待会儿输出到终端时,最后一行会输出两次
	
	fclose(fp);
	
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","r"))==NULL)
	{
		printf("NO exit!\n");
		exit(0);
	}
	
	while(!feof(fp))
	{
		fgets(buffer,MAX,fp);
		printf("%s",buffer); //这里不需要再\n因为之前futs已经有\n
	}

	fclose(fp);
}
