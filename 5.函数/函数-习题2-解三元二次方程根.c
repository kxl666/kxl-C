#include <stdio.h>
#include <math.h>

double x1,x2,realpart,imagpart;
int main()
{
	double f1(double a,double b);
	void f2(double a,double b,double c);
	void f3(double a,double b,double c);
	double a,b,c,disc;
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("The equation\n");
	if (fabs(a)<=1e-6) 
		printf("is not a quadratic\n");
	else
	{
		disc=b*b-4*a*c;
		if (fabs(disc)<=1e-6)
			printf("has two equal roots %8.4f\n",f1(a,b));
		else	
			if (disc>1e-6)	
			{
				f2(a,b,disc);
				printf("has distinct real roots \n%8.4f and %8.4f\n",x1,x2);	
			}
			else
			{
				f3(a,b,disc);
				printf("%8.4f,%8.4f\n",realpart,imagpart);	
			}
	}
	
}

double f1(double a,double b)
{
	return(-b/(2*a));
}

void f2(double a,double b,double c)
{
				x1=(-b+sqrt(c))/(2*a);
				x2=(-b-sqrt(c))/(2*a);
}

void f3(double a,double b,double c)
{
				realpart=-b/(2*a);
				imagpart=sqrt(-c)/(2*a);
}
