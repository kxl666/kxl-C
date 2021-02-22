#include <stdio.h>
#define N 10
#define M 5

float score[N][M];
float a_stu[N],a_cour[M];
int r,c;

int main()
{
	int i,j;
	float h;
	float s_var();
	float highest();
	void input_stu();
	void aver_stu();
	void aver_cour();
	
	input_stu();
	aver_stu();
	
	printf("\n NO.	cour1	cour2	cour3	cour4	cour5	aver\n");
	for(i=0;i<N;i++)
	{
		printf("\n NO %2d ",i+1);
		for(j=0;j<M;j++)
			printf("%8.2f",score[i][j]);
		printf("%8.2f\n",a_stu[i]);
	}
	
	printf("\naverage-");
	for(j=0;j<M;j++)
		printf("%8.2f",a_cour[j]);
	printf("\n");
	
	h=highest();
	printf("highest-%7.2f	NO. %2d	course %2d\n",h,r,c);
	
	printf("variance %8.2f\n",s_var());
}

void input_stu()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		printf("\nInput score of student%2d-\n",i+1);
		for(j=0;j<M;j++)
			scanf("%f",&score[i][j]);
	}
}

void aver_stu()
{
	int i,j;
	float s;
	for(i=0;i<N;i++)
	{
		for(j=0,s=0;j<M;j++)
			s+=score[i][j];
		a_stu[i]=s/5.0;
	}
}

void aver_cour()
{
	int i,j;
	float s;
	for(j=0;j<M;j++)
	{
		s=0;
		for(i=0;i<N;i++)
			s+=score[i][j];
		a_cour[j]=s/10.0;
	}
	
}

float highest()
{
	float high;
	int i,j;
	high=score[0][0];
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			if (score[i][j]>high)
			{
				high=score[i][j];
				r=i+1;
				c=j+1;
			}
			return(high);
}

float s_var()
{
	int i;
	float sumx,sumxn;
	sumx=0.0;
	sumxn=0.0;
	for(i=0;i<N;i++)
	{
		sumx+=a_stu[i]*a_stu[i];
		sumxn+=a_stu[i];
	}
	return(sumx/N-(sumxn/N)*(sumxn/N));
}
