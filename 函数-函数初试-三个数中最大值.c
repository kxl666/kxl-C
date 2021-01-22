#include <stdio.h>
int main()
{
	int max01(int x,int y,int z);
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("max=%d\n",max01(x,y,z));
	return 0;
}


int max01(int x,int y,int z)
{
	int max02(int x,int y);
	int mb;
	mb=max02(x,y);
	mb=max02(mb,z);
	return(mb);
}

int max02(int x,int y)
{
	int ma;
	ma=(x>y)?x:y;
	//mb=(max>z)?max:z;
	return(ma);
}

