#include<stdio.h>

int main()
{
	extern int y;
	printf("Y=%d", y);
	return 0;
}
int y = 100;

