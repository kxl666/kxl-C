#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp1,*fp2;
	int i=0,j=0;
	char str1[40],str2[80],temp;
	fp1=fopen("C:\\Users\\kxl\\Desktop\\test01.txt","r");
	fp2=fopen("C:\\Users\\kxl\\Desktop\\test02.txt","r");
	
	fgets(str1,strlen(str1)+1,fp1);
	fgets(str2,strlen(str2)+1,fp2);
	printf("file01 的内容: %s\n",str1);
	printf("file02 的内容: %s\n",str2);
	fclose(fp1);
	fclose(fp2);
	
	j=strlen(str2);
	while(str1[i]!='\0')
	{
		str2[j++]=str1[i++];
	}
	str2[j]='\0';
	printf("排序前合并的字符串：%s\n",str2);
	
	for(i=0;i<strlen(str2);i++)
	{
		for(j=0;j<(strlen(str2)-1-i);j++)
			if (str2[j]>str2[j+1])
			{
				temp=str2[j];
				str2[j]=str2[j+1];
				str2[j+1]=temp;
			}
	}
	
	fp1=fopen("C:\\Users\\kxl\\Desktop\\test03.txt","w");
	fputs(str2,fp1);
	fclose(fp1);
	printf("排序后合并的字符串：%s\n",str2);
}
