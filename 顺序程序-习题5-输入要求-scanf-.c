# include <stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	char url[30]; //此时没有立即给字符串url赋值,所以它不能自动计算长度,所以不能url[]
	//scanf("%s", url); //可以加&也可以不加&
	//看书不能一扫而过,%c 是遇到 空格和转义字符 也当做输入值。而且%c只吸收一个字符
	//而数值型数据 是遇到 空格.回车.tab键.其他不属于数值的字符 就取值结束. 搞清楚前者是当做输入,这个是当做结束
	scanf("a=%d b=%d",&a,&b);
	//其中scanf中输入的数据类型 需 与输出的数据类型一致
	scanf("%f %e",&x,&y);
	scanf("%c %c",&c1,&c2);
	//printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c,url=%s\n",a,b,x,y,c1,c2,url);
	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
	return 0;
}
//自行配合各种尝试会发现自己概念还是不清
