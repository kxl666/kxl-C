#include <stdio.h>

int main()
{
	int i,j,upp,low,dig,spa,oth;
	char text[3][80];
	upp=low=dig=spa=oth=0;
	for(i=0;i<3;i++)
	{
		printf("please input line %d-\n",i+1);
		gets(text[i]);
		
		for(j=0;j<80&&text[i][j]!='\0';j++)
			if (text[i][j]>='A'&&text[i][j]<='Z')
				upp++;
			else if (text[i][j]>='a'&&text[i][j]<='z')
				low++;
			else if (text[i][j]>='0'&&text[i][j]<='9')
				dig++;
			else if (text[i][j]==' ')
				spa++;
			else
				oth++;
	}
	printf("\n大写字母-%d\n",upp);
	printf("小写字母-%d\n",low);
	printf("数字-%d\n",dig);
	printf("空格-%d\n",spa);
	printf("其他字符-%d\n",oth);
}



