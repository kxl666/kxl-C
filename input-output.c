#include <stdio.h>
int main(){
    int a=2,b=4,i=8,a3,b3,c3;
	char a1='B',b1='o',c1,c2;
    printf("AAAAA=%-d FFFF=%-d" , a,b);
	printf("\n");

	//һ�ּ������char���� ֻ���һ���ַ�
	putchar(a1);putchar(b1);putchar('\t');
	putchar(a1);putchar(b1);
	putchar('\n');

	//i++:�������ٸ�ֵ ++i:�ȸ�ֵ������ ��������
	//����1=8 2=9 3=10 4=10 ...
	//printf("%d\n",i++); //1
	//printf("%d\n",i); //2
	//printf("%d\n",++i); //3
	//printf("%d\n",i); //4
	//printf("%d\n",i++);
	//printf("%d\n",++i);
	//printf("\n");

	//�������� �����ǲ��й�ϵ �����������ٸ�ֵ��Ч
	//���� ����� 9 9 9 9 8
	printf("%d\n%d\n%d\n%d\n%d\n",i,i,i,++i,i);

	//һ�ּ�������char���� ֻ����һ���ַ�
	//printf("PLEASE IPUUT:");
	//c2 = getchar();
	//c1 = getchar();
	//putchar(c2,c1);
	printf("ggg:%c",getchar());
	//putchar(c1);
	printf("\n");

	//���ŵļ�������
	//sizeof: ��ʾ�ֽڳ���
	printf("input a3 b3 c3:");
	scanf("%d,%d,%d",&a3, &b3, &c3);
	printf("%d %% - %d - %d",sizeof(a3),b3,c3);
	printf("\n");
}


