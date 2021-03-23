#include <stdio.h>
#include <string.h>
#define MAX(a,b) (a>b)?a:b
#define SQ(y) (y)*(y) //括号不要去掉不然试试
#define STR(s1,s2,s3,sum) strcat(strcat(strcat(sum,s1),s2),s3)

int main()
{
	int x=1,y=4,max,a=3,sq1,sq2;
	char str1[]="I",str2[]="love",str3[]="Fishc.com",str[40]="";
	max=MAX(x,y); //只是进行符号代换,不存在值传递的问题 相当于 max=(x>y)?x:y
	printf("The max id %d\n",max);

	sq1=SQ(a+1);
	printf(" sq- %d\n",sq1);
    
	sq2=160/SQ(a+1); //结果竟然还是160 ,因为是 160/(3+1)*(3+1). 宏定义应该改为#define SQ(y) ((y)*(y))
	printf(" sq- %d\n",sq2);
	
	STR(str2,str1,str3,str);
	printf("\n\tstr1=%s\n\tstr2=%s\n\tstr3=%s\n\tstr=%s\n\n\n",str1,str2,str3,str);

	str[0]=0; //清空字符串欺骗一下编译程序0就结束(就如硬盘中的数据并没有真正删除,只是删除索引之类的,有新数据酒会覆盖)
	printf("\n\tNOW str is %s\n",str);
}
