#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char name[40];
	char author[40];
	char publisher[40];
	struct Date date;
};

int main()
{
	FILE *fp;
	struct Book *book_for_write,*book_for_read;
	book_for_write=(struct Book *)malloc(sizeof(struct Book)); //为结构体指针分配动态内存空间
	book_for_read=(struct Book *)malloc(sizeof(struct Book));
	
	if (book_for_write==NULL||book_for_read==NULL)
	{
		printf("Memory allocation failed!");
		exit(0);
	}
	
	strcpy(book_for_write->name,"C语言");
	strcpy(book_for_write->author,"柯小乐");
	strcpy(book_for_write->publisher,"清华大学出版社");
	book_for_write->date.year=2021;
	book_for_write->date.month=3;
	book_for_write->date.day=27;
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","wb");
	fwrite(book_for_write,sizeof(struct Book),1,fp); //以二进制方式系向文件中写 此时打开文件是二进制,系统转码后看不懂的
	fclose(fp);
	
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","rb"))==NULL)
	{
		printf("Failed to open the file\n");
		exit(0);
	}
	
	fread(book_for_read,sizeof(struct Book),1,fp); //以二进制方式系向文件中读
	printf("书名: %s\n",book_for_read->name);
	printf("作者: %s\n",book_for_read->author);
	printf("出版社: %s\n",book_for_read->publisher);
	printf("出版日期: %s\n",book_for_read->date.year,book_for_read->date.month,book_for_read->date.day);
	
	fclose(fp);
}
