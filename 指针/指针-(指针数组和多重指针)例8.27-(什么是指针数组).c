#include <stdio.h>
#include <string.h>
//选择排序将若干字符串按字母顺序(由小到大)输出。
//-一个数组,若其元素均为指针类型数据,称为指针数组
//指针数组每个下标记录每行字符串首字符的地址

int main()
{	
	void sort(char *name[],int n);
	void print(char *name[],int n);
	char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	
	int n=5;
	sort(name,n);
	print(name,n);
}

void sort(char *name[],int n)
{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if (strcmp(name[k],name[j])>0)
				k=j;
	}
	if (k!=i)
	{
		temp=name[i];
		name[i]=name[k];
		name[k]=temp;
	}
}

void print(char *name[],int n)
{
	//int i;
	//for(i=0;i<n;i++)
	//	printf("%s\n",name[i]);
	int i=0;
	char *p;
	p=name[0];
	while(i<n)
	{
	p=*(name+i++);
	printf("%s\n",p);
	}
}

