#include <stdio.h>
#include <string.h>

int main()
{
	void f1(int score[],int n);
	int score[80]={0},i,n=0;
	printf("how many number exit-");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &score[i]);
	}
	f1(score,n);
	for(i=0; i<n; i++) 
	{
		printf("%d ", score[i]);
	}
	printf("\n");
}

void f1(int score[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (score[j]<score[j+1])
			{
				int temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	
}
