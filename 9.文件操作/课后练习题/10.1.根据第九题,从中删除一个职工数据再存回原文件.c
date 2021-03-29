#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char name[10];
	int salary;
}emp[20];

int main()
{
	FILE *fp;
	int i,j,n,flag;
	char name[10];
	if ((fp=fopen("C:\\Users\\kxl\\Desktop\\emp_salary.txt","rb"))==NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	
	printf("original data-\n");
	for(i=0;fread(&emp[i],sizeof(struct employee),1,fp)==1;i++) //不知道多少行情况下
		printf("\n %8s %7d",emp[i].name,emp[i].salary);
	printf("\n");
	fclose(fp);
	n=i;
	
	printf("please input name deleted-");
	scanf("%s",name);
	for(i=j=0;i<n;i++)
	{
		if (strcmp(name,emp[i].name)!=0)
			emp[j++]=emp[i];  //这种比第二种效率低些
		else 
			flag=0;
	}
	
	if (!flag)
		n=n-1;
	else
	{
		printf("not found!\n");
		return 0; //=exit(0)
	}
	
	printf("Now\n");
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\emp_salary.txt","wb");
	for(i=0;i<n;i++)
		fwrite(&emp[i],sizeof(struct employee),1,fp);
	fclose(fp);
	
	fp=fopen("C:\\Users\\kxl\\Desktop\\emp_salary.txt","rb");
	for(i=0;i<n;i++)
	{
		fread(&emp[i],sizeof(struct employee),1,fp);
		printf("\n %8s %7d",emp[i].name,emp[i].salary);
	}
	printf("\n");
	fclose(fp);
}
