#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	for(;;)
	{
		ch=getch();
		if (ch==13)
			break;
		putchar(ch);
	}

}
