#include <stdio.h>
#include <string.h>

struct t
{
	unsigned int a:1; //һ���ֽ�ռ8��bit,����ָ��1��bit
	unsigned int b:1; //�����Ϊ1���ֽ�,����printfֻ���2(01)���Ϊ0
	unsigned int :2;
};

int main()
{
	struct t a;
	a.a=1;
	a.b=2;
	printf("%d-%d\n",a.a,a.b);
	printf("%d\n",sizeof(a)); //һ��λ��˸�bit,��a(4),b(2),c(2)����λ��
}
