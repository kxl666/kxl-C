#include <stdio.h>

//只能输出右边

int main()
{	
	int i,j,n,m,k=3;
	scanf("%d",&m);
	for (i=1;i<=m;i++)
	{
		if (i<=m/2+1)
		{
		for (j=1;j<=i;j++)
		{
			printf("*");
			printf(" ");
		}
		}
		else
		{
    //注意以下两行,循环覆盖值,又容易忽略
		if ( i== m/2+2) n=1; 
		if ( i== m/2+k) n=n+1,k=k+1;
    
		for (j=1;j<=i-2*n;j++)
		{
			printf("*");
			printf(" ");
		}

		}
	printf("\n");
	}
	printf("\n");
}
