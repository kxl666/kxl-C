#include <stdio.h>
int main(){
    int a=2,b=4,i=8,a3,b3,c3;
	char a1='B',b1='o',c1,c2;
    printf("AAAAA=%-d FFFF=%-d" , a,b);
	printf("\n");

	//一种键盘输出char类型 只输出一个字符
	putchar(a1);putchar(b1);putchar('\t');
	putchar(a1);putchar(b1);
	putchar('\n');

	//i++:先运算再赋值 ++i:先赋值再运算 依次向下
	//所以1=8 2=9 3=10 4=10 ...
	//printf("%d\n",i++); //1
	//printf("%d\n",i); //2
	//printf("%d\n",++i); //3
	//printf("%d\n",i); //4
	//printf("%d\n",i++);
	//printf("%d\n",++i);
	//printf("\n");

	//从右至左 并且是并行关系 所以先运算再赋值无效
	//所以 结果是 9 9 9 9 8
	printf("%d\n%d\n%d\n%d\n%d\n",i,i,i,++i,i);

	//一种键盘输入char类型 只接收一个字符
	//printf("PLEASE IPUUT:");
	//c2 = getchar();
	//c1 = getchar();
	//putchar(c2,c1);
	printf("ggg:%c",getchar());
	//putchar(c1);
	printf("\n");

	//更优的键盘输入
	//sizeof: 显示字节长度
	printf("input a3 b3 c3:");
	scanf("%d,%d,%d",&a3, &b3, &c3);
	printf("%d %% - %d - %d",sizeof(a3),b3,c3);
	printf("\n");
}


