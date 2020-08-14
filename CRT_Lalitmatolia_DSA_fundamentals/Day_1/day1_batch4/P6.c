#include<stdio.h>
int main()
{
	extern int x;
	printf("X=%d", x);
	return 0;
}
int x = 500;

