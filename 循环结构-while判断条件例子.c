#include <stdio.h>
int main()

{
	int a=0,n=10;
	while(n--) //相当于 n!=0 ,然后在循环体内部 n--
	printf("%d\t",a++*2); //相当于 a*2;a++
}    
