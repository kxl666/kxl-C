#include <stdio.h>

int main()
{
	void change(int *p);
	int a[5][5],*p,i,j;
	printf("input matrix-\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		p=&a[0][0];
		change(p);
		printf("Now,matrix-\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
}

void change(int *p)
{
	int i,j,temp;
	int *pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
		for(j=i;j<5;j++)
		{
			if (*pmax<*(p+5*i+j)) pmax=p+5*i+j;
			if (*pmin>*(p+5*i+j)) pmin=p+5*i+j;
		}
		
		temp=*(p+12); //将最大值与中心元素互换
		*(p+12)=*pmax;
		*pmax=*(p+12);
		
		temp=*p; //将最小值与左上角元素互换
		*p=*pmin;
		*pmin=temp;
		
		pmin=p+1; //将a[0][1]的地址赋给pmin,从该位置开始找最小的元素
              //找第二最小值的地址赋给pmin
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if (i==0 && j==0 ) continue;
					if (*pmin>*(p+5*i+j))
						pmin=p+5*i+j; 
			}
			temp=*pmin; //将第二最小值与右上角元素互换
			*pmin=*(p+4);
			*(p+4)=temp;
			
			pmin=p+1; //找第三最小值的地址赋给pmin
			for(i=0;i<5;i++)
				for(j=0;j<5;j++)
				{
					if ((i==0 && j==0) || (i==0 && j==4)) continue;
						if (*pmin>*(p+5*i+j))
							pmin=p+5*i+j;
				}
				temp=*pmin; //将第三最小值与左下角元素互换
				*pmin=*(p+20);
				*(p+20)=temp;			
				
				pmin=p+1; //找第四最小值的地址赋给pmin
				for(i=0;i<5;i++)
					for(j=0;j<5;j++)
					{
						if ((i==0 && j==0) || (i==0 && j==4) || (i==4 && j==0) ) continue;
							if (*pmin>*(p+5*i+j))
								pmin=p+5*i+j;
					}
					temp=*pmin; //将第四最小值与右下角元素互换
					*pmin=*(p+24);
					*(p+24)=temp;				
}
