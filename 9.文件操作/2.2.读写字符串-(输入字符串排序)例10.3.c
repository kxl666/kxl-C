#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 3
#define MAX 1024

int main()
{
	FILE *fp;
	char str[N][MAX],temp[MAX],str02[N][MAX];
	int i=0,j,k;
	printf("Enter string:\n");
	while(i<N)
		gets(str[i++]);
	
	for(i=0;i<N;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if (strcmp(str[k],str[j])>0)
				k=j;
			
			strcpy(temp,str[i]);
			strcpy(str[i],str[k]);
			strcpy(str[k],temp);
	}
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","w");
	
	for(i=0;i<N;i++)
	{
		fputs(str[i],fp);
		if (i!=N-1) fputs("\n",fp); //每行再输入一个换行符
		//printf("%s\n",str[i]);
	}
	fclose(fp);
	
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\kxl.txt","r"))==NULL)
	{
		printf("There isn't exit\n");
		exit(0);
	}
	
	i=0;
	while(!feof(fp)) //=while(fgets(str02[i],MAX,fp)!=NULL)
	{
		fgets(str02[i],MAX,fp); //把文件里的内容给二维数组str02 来装
		printf("%s",str02[i++]);
	}
	printf("\n");
	fclose(fp);
}
