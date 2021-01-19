#include <stdio.h>
int main()
{
    short a = 0b1010110;  //二进制数字,有的编译器不支持
    int b = 02713;  //八进制数字 //加0是表明2713是个八进制数然后数据类型转换成int 十进制数
    long c = 0X1DAB83;  //十六进制数字 //加0X是表明1DAB83是个十六进制数然后数据类型转换成int 十进制数
    
    printf("a=%ho, b=%o, c=%lo\n", a, b, c);  //将转换成十进制数的 八进制数02713 以八进制形似输出。。。
    printf("a=%hd, b=%d, c=%ld\n", a, b, c);  //以十进制形式输出
    printf("a=%hx, b=%x, c=%lx\n", a, b, c);  //以十六进制形式输出（字母小写）
    printf("a=%hX, b=%X, c=%lX\n", a, b, c);  //以十六进制形式输出（字母大写）
    //结果说明各进制之间可以相互转换
    //输出格式加上#加以区分
    /*
    printf("a=%#ho, b=%#o, c=%#lo\n", a, b, c);  //以八进制形似输出
    printf("a=%hd, b=%d, c=%ld\n", a, b, c);     //以十进制形式输出
    printf("a=%#hx, b=%#x, c=%#lx\n", a, b, c);  //以十六进制形式输出（字母小写）
    printf("a=%#hX, b=%#X, c=%#lX\n", a, b, c);  //以十六进制形式输出（字母大写）
    */
    return 0;
}

//下例说明 不同进制的数据存放都整形变量中都是整形值，直接计算就行，计算交给计算机 输入 0x12 05
/* int main()
{
	int a = 0;
	int b = 0;
	int sum;
	scanf("%x %o", &a, &b);
	printf("%d\n", sum=a+b);
	return 0;
}
