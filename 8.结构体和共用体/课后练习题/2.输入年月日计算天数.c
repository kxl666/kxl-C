#include <stdio.h>

struct y_m_d
{
	int year;
	int month;
	int day;
}date;

int main()
{
	int days(int year,int month,int day);	
	int day_sum;
	printf("input year,month,day--");
	scanf("%d,%d,%d",&date.year,&date.month,&date.day);
	day_sum=days(date.year,date.month,date.day);
	printf("%d/%d is the %dth day in %d \n",date.month,date.day,day_sum,date.year);
}

int days(int year,int month,int day)
{
	int i;
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<month;i++)
		day=day+day_tab[i];
	if ((year%4==0&&year%100!=0||year%400==0)&&month>=3)
		day=day+1;
	return(day);
}
