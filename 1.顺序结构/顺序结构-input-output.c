#include <stdio.h>
#include <conio.h>
int main()
{
    	int a=2,b=4,i=8,a3,b3,c3,a4,x=9;
	//int x,y,z;
	//x=y=z=3; 即便不能int x=y=z=3;这样是可以的
	int a1='m8',b1='103',c1,c2; //赋值为多个字符时,在putchar 和 printf("%c\n",b1); 中 都只认最后一个。当b1=103 才会输出 字母 g
				    //在printf("%d\n",b1); 中 b1='103' 或 a1='m8' 会输出莫名长串数值
	//int num1=3;
	//int num2=4;
	//int num=num1*num2; // int也可以直接计算!
        //printf("AAAAA=%-d FFFF=%-d" , a,b);
	printf("\n");
	printf("\n%d\n", printf("Hello world!")); //输出Hello world! 和 printf(“Hello world!”)调用后的返回值(就是字符串长度,所占存储空间大小)。
	
	printf("%*d",4,i); //* 表示附加字符,4个宽度 结果输出:   8
	
	//printf("There is  %d\n",8&3); &中 前数大于后数结果是0 反之结果是前者
	//printf("There is  %d\n",4<<2); <<表示4*(2的平方) 例4<<1表示4*2的一次方
	//printf("There is  %d\n",4>>2); >>表示4/(2的平方) ,注意！ 4>>1 表示4/2 类推9>>1 = 4
	//printf("There is  %d\n",9^5); 9^5=00001001^00000101=00001100.结果就是12。
	
	//01一种键盘输出char类型 只输出一个【字符】 等于 putch ?
	putchar(a1);putchar('\t'); //只输出 8
	putchar(b1); //输出 3
	//putchar(a1);putchar(b1);
	putchar(n%10+'0');
	putchar(32);
	putchar('t');
	putchar('\n');
	
	//02一种键盘输出 一个字符串
	//char a[]="dddwd\nd"; //可以识别转义字符
	//puts(a);
	puts("hello word!");
	Sleep(5000);  //程序暂停5秒钟！！！
	

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
	//printf("%d\n%d\n%d\n%d\n%d\n",i,i,i,++i,i);
	
	//i=8 ,max(i,++i) 在不同操作系统至左或至右,Windows中至右向左 所以函数调用的实参是max(9,9)
	
	//printf("%d",a=(--x)+(--x)+(--x)); //a=9,结果等于20，x的值最后都会变成自减两次后的,先算前两个一结合的x赋值在给到前两个x,无论有多少个x都按照这规律,两两一赋值再运算
	//printf("%d",a=(x)+(--x)+(--x)+(--x)); //结果等于29
	//printf("%d",a=(x--+--x)+(--x+--x); //结果等于28
	//03一种键盘输入char类型 只接收一个字符,只接收第一个,例如: 输入89 只会接收8 .与第五行现象相反
	//有缓冲区，输入一个字符后，需要等待用户按下回车键
	//输入时需c2c1不能有空格因为空格也会被当作字符被getchar吸收
	printf("PLEASE IPUUT:");
	c2 = getchar();
	c1 = getchar();
	putchar(c1);
	putchar(c2);
	
	printf("ggg:%d",getchar()); //此时输入1,getchar会 把1当做字符处理,所以输出 49. 而且输入102或12345565等等 结果都是49
			     	    //此时输入g,输出103 理所当然。而且输入gh或gj等等 结果都是103
	//putchar(c1);
	printf("\n");
	
	//04一种键盘输入,只接收一个字符，没有缓冲区，输入一个字符后会立即读取，不用等待用户按下回车键 头文件conio.h
	// getche()
	
	//05一种键盘输入,只接收一个字符，没有缓冲区，输入一个字符后会立即读取，不用等待用户按下回车键,没有回显，看不到输入的字符 头文件conio.h
	// getch()
	
	//06一种字符串输入函数，输入一个字符串 ，gets()认为 空格 也是字符串的一部分,只有遇到回车键时才认为字符串输入结束,所以,
	//不管输入了多少个空格,只要不按下回车键,对gets()来说就是一个完整的字符串. 也就是说，gets() 能读取含有空格的字符串，而 scanf() 不能。 二者主要区别
	//如果是char str1[5],str2[5],str3[5] 
        //     scanf(" %s%s%s" ,strl,str2,str3); 输入 How are you? 会对应str1="How" str2="are" str3="you?"
	//如果是char str[13]
	//     scanf(" %s",str); 输入How are you? str="How" //结合scanf %s遇到空格就结束 
	
	// gets()
	//char author[30];
	//gets(author);
	//printf("author: %s\n", author);
	
	//07更优的键盘输入
	//sizeof: 显示字节长度
	//printf("input a3 b3 c3:");
	//scanf("%d,%d,%d",&a3, &b3, &c3);
	//printf("%d %% - %d - %d",sizeof(a3),b3,c3);
	
	//scanf("%2d%*2d%1d",&x,&y);
	//printf("%d\n",x+y); //输入1234567    579//输出17
	//因为%2d所以x=12,因为%*2d所以34被吸收,因为%1d所以y=5
	
	printf("\n");
	getch(); // 或 getchar();//可以让程序暂停一下 也就是为什么文件夹下面.exe结尾的文件执行一闪而过,有这行程序会停住等待输入
	
	/*总结
	C语言中常用的从控制台读取数据的函数有五个，它们分别是 scanf()、getchar()、getche()、getch() 和 gets()。
	其中 scanf()、getchar()、gets() 是标准函数，适用于所有平台；getche() 和 getch() 不是标准函数，只能用于 Windows。
	scanf() 是通用的输入函数，它可以读取多种类型的数据。
	getchar()、getche() 和 getch() 是专用的字符输入函数，它们在缓冲区和回显方面与 scanf() 有着不同的特性，是 scanf() 不能替代的。
	gets() 是专用的字符串输入函数，与 scanf() 相比，gets() 的主要优势是可以读取含有空格的字符串。
	scanf() 可以一次性读取多份类型相同或者不同的数据，getchar()、getche()、getch() 和 gets() 每次只能读取一份特定类型的数据，不能一次性读取多份数据。
	*/
}


