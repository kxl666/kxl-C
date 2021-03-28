#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl01.txt","w");

	printf("%ld\n",ftell(fp)); //标记当前位置
	fputc('F',fp);
	printf("%ld\n",ftell(fp));
	fputs("i love you\n",fp);
	printf("%ld\n",ftell(fp));

	rewind(fp); //发现之前的内容 F i love you都被覆盖了一部分
	fputs("Hello",fp);

	fclose(fp);
}
