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
	scanf("a=%d b=%d",&a,&b); //这里输入时比较有意思,输完a=1 (可以有多个空格) b=2后可以接多个空格回车tab键都行,因为不论你怎么浪,只要不输入数值下一行的%f %e 始终不接收值.想到数值型特性,只认数值
	//其中scanf中输入的数据类型 需 与输出的数据类型一致
	scanf("%f %e",&x,&y); //scanf 中有空格 输入时 1.34 4.56AB或1.34 4.56A B(期间有多个空格都行),也必须也空格较好,不能正确区分两个浮点型数值
			      //4.56后面必须紧跟A ，因为数值类型遇到空格结束,不然此时刚好%c遇到空格就当作输入值了
	scanf("%c %c",&c1,&c2); //当scanf 中有空格输入时可以有一或多个空格.若没有,输入时一个空格都不能有,因为%c会吸收空格当作输入值
	//printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c,url=%s\n",a,b,x,y,c1,c2,url);
	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);
	return 0;
}
