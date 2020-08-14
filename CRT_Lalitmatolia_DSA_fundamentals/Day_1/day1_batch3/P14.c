#include<stdio.h>
int main()
{
	int x = 5, y;
	y = x++; // y = x; x = x + 1; 
	printf("X=%d Y=%d", x, y); // x = 5 + 1 = 6; y = 5
	return 0;
}
