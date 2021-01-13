#include <stdio.h>
int main(){
	int c,s;
	float p,w,d,f;
	printf("ÇëÊäÈëÊý¾Ý-");
	scanf("%f,%f,%d",&p,&w,&s);
	if ( s >= 250 )
	{
   if ( s >= 500 )
    if ( s >= 1000 )
     if ( s >= 2000 )
      if ( s >= 3000 )
       d = 15;
      else
       d = 10;
     else
      d = 8;
    else
     d = 5;
   else
    d = 2;
 }
else
 d = 0;
 f=p*w*s*(1-d/100);
 printf("end=%10.2f\n",f);
	printf("\n");
}


