#include<stdio.h>
int main()
{
	int x = 10, y, z;
	y = ++x; // x = x + 1; y = x;
	printf("X=%d Y=%d\n", x, y); // x = 11, y = 11
	z = x++; // z = x; x = x + 1;
	printf("X=%d Z=%d", x, z); // x = 12, z = 11
	return 0;
}
