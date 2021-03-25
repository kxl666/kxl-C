#include <stdio.h>

int main()
{	
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float (*pointer)[4]);
	float *p;
	int i,j;
	for(i=0;i<3;i++)
	{
		p=search(score+i);
		
		if (p==*(score+i))
		{
			printf("No. %d score:",i);
			for(j=0;j<4;j++)
				printf("%5.2f ",*(p+j)); //区分这里是一般指针变量
			printf("\n");
		}
	}
}

float *search(float (*pointer)[4])
{
	int i=0;
	float *pt;
	pt=NULL;
	for(;i<4;i++)
		if (*(*pointer+i)<60) //=(pointer[0][i]<60) =((*pointer)[i]<60)  //这里是指向多维数组的指针 //这里是值5.1(8.25)是址
			pt=*pointer; 
		return(pt);
}
