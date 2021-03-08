#include <stdio.h>

int main()
{
	int i=1;
	float score1,score2,score3,score4,score5,aver;
	while(i<=2)
	{
		scanf("%f,%f,%f,%f,%f",&score1,&score2,&score3,&score4,&score5);
		aver=(score1+score2+score3+score4+score5)/5.0;
		printf("aver=%7.2f\n",aver);
		i++;
	}
}
