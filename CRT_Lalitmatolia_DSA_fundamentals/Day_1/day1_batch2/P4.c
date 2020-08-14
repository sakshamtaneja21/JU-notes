#include<stdio.h>
int main()
{
	int x = 10, y, z;
	y = ++x; // x = x + 1; y = x;
	printf("X=%d Y=%d", x, y);
	z = x++; // z=x; x = x + 1;
	printf("\nX=%d Z=%d", x, z);
}

/*
prefix incrementation = ++x
postfix incrementation = x++
*/
