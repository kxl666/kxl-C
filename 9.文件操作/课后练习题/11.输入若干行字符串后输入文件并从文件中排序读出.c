#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	int i,j,num;
	char str[80][80],str02[80][80];
	printf("the total of spring -");
	scanf("%d",&num);
	getchar();
	for(i=0;i<num;i++)
	{
		printf("please input line %d--",i+1);
		gets(str[i]);
		//printf("str[%d]=%s\n",i+1,str[i]);
	}
	printf("\n");
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","w");
	for(i=0;i<num;i++)
	{
		fputs(str[i],fp);
		if (i!=num-1) fputs("\n",fp);
	}
	fclose(fp);
	
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","r"))==NULL)
	{
		printf("open file fail!\n");
		exit(0);
	}
	printf("\n\t\tThe follow string have been changed!\n\n");
	for(i=0;fgets(str02[i],80,fp)!=NULL;i++)
	{
		for(j=0;str02[i][j]!='\0';j++)
			if (str02[i][j]>'a' && str02[i][j]<'z')
				str02[i][j]-=32;
			printf("\t\tstr02[%d]=%s\n\n",i+1,str02[i]);
	}
	fclose(fp);
}
