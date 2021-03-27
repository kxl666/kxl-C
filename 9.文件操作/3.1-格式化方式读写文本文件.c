#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int year,month,day;
	FILE *fp;
	struct tm *p;
	time_t t;
	
	time(&t);
	p=localtime(&t);
	
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","w");
	
	fprintf(fp,"%d-%d-%d",1900+p->tm_year,1+p->tm_mon,p->tm_mday); //格式化方式写入文件
	
	fclose(fp);
	
	
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","r"))==NULL)
	{
		printf("Error!");
		exit(0);
	}
	fscanf(fp,"%d-%d-%d",&year,&month,&day); //格式化从文件中读出到变量
	printf("%d-%d-%d\n",year,month,day);
	fclose(fp);
}
