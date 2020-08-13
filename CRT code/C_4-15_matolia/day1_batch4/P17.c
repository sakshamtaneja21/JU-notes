#include<stdio.h>
int main()
{
	int x = 10, y, z;
	y = ++x; // x = x + 1; y = x;  x = 11, y = 11
	z = x++; // z = x; x = x + 1;  z = 11, x = 12
	printf("X=%d Y=%d Z=%d", x, y, z);
	return 0;
	// Final Answer: X = 12 Y = 11 Z = 11
}
