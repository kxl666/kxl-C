#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("The equation");
	if (fabs(a)<=1e-6) //a=0 不是二元一次方程 fabs(a)是a 的绝对值
		printf("is not a quadratic\n");
	else
	{
		disc=b*b-4*a*c;
		if (fabs(disc)<=1e-6) //b*b-4*a*c=0
			printf("has two equal roots %8.4f\n",-b/(2*a)); //有两个相等实根
		else
			if (disc>1e-6) //b*b-4*a*c>0
			{
				x1=(-b+sqrt(disc))/(2*a);
				x2=(-b-sqrt(disc))/(2*a);
				printf("has distinct real roots \n%8.4f and %8.4f\n",x1,x2); //有两个不等实根
			}
			else //b*b-4*a*c<0
			{
				realpart=-b/(2*a);
				imagpart=sqrt(-disc)/(2*a);
				printf("has complex roots \n");
				printf("%8.4f+%8.4f\n",realpart,imagpart); //有两个共轭复根
				printf("%8.4f-%8.4f\n",realpart,imagpart);
			}
	}
}
