#include <stdio.h>
#include <string.h>

struct t
{
	unsigned int a:1; //一个字节占8个bit,这里指定1个bit
	unsigned int b:1; //这里改为1个字节,下面printf只会把2(01)输出为0
	unsigned int :2;
};

int main()
{
	struct t a;
	a.a=1;
	a.b=2;
	printf("%d-%d\n",a.a,a.b);
	printf("%d\n",sizeof(a)); //一个位域八个bit,分a(4),b(2),c(2)三个位段
}
