# include <stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	char url[30];
	scanf("%s", url); //可以加&也可以不加&
	scanf("a=%d b=%d",&a,&b);
	//其中scanf中输入的数据类型 需 与输出的数据类型一致
	scanf("%f %e",&x,&y);
	scanf("c1=%c c2=%c",&c1,&c2);
	printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c,url=%s\n",a,b,x,y,c1,c2,url);
	return 0;
}
