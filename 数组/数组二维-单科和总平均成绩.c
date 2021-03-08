#include <stdio.h>
int main()
{
	int i,j,s=0,average,v[3];
	int a[5][3]={{80,75,92},{61,65,71},{59,63,70},{85,87,90},{76,77,85}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
			s=s+a[j][i];
		v[i]=s/5;
		s=0;
	}
	average=(v[0]+v[1]+v[2])/3;
	printf("数学平均成绩:%d\n 英语平均成绩:%d\n 语文平均成绩:%d\n",v[0],v[1],v[2]);
	printf("总平均成绩:%d\n",average);
}
