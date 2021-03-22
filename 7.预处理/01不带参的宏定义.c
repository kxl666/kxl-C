#include <stdio.h>
#define PI 3
#define S PI*i*i  //宏定义允许嵌套
#define PIN1 char*
typedef char* PIN2; //而typedef是在编译时处理的，它不是作简单的代换，而是对类型说明符重新命名。被命名的标识符具有类型定义说明的功能。
#define P printf
#define D "%d\n"
#define F "%f\n"

int main()
{
	int i=6;
	PIN1 x,y; //只是char* x,而y 是char
	PIN2 a,b;
	float j=3.8;
#undef //限制define的作用范围 //发现S不受影响因为宏定义只是简单的字符串代换,是在预处理完成的(一开始)
	printf("%d\n",i+PI);
	printf("PI\n"); //PI在引号中应该是表示常量字符串，不替换...
	printf("%d\n",S);
	printf("By #define- %d %d\n\n",sizeof(x),sizeof(y));
	printf("By typedef- %d %d\n\n",sizeof(a),sizeof(b));
	P(D F,i,j);
}
