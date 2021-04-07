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
	for(i=0;fread(&emp[i],sizeof(struct employee),1,fp)==1;i++) //²»ÖªµÀ¶àÉÙÐÐÇé¿öÏÂ
		printf("\n %8s %7d",emp[i].name,emp[i].salary);
	printf("\n");
	fclose(fp);
	n=i;
	
	printf("please input name deleted-");
	scanf("%s",name);
	for(flag=1,i=0;flag&&i<n;i++)
	{
		if (strcmp(name,emp[i].name)==0)
		{
			for(j=i;j<n-1;j++)
			{
				strcpy(emp[j].name,emp[j+1].name);
				emp[j].salary=emp[j+1].salary;
			}
			flag=0;
		}
	}
	
	if (!flag) n=n-1;
	
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
