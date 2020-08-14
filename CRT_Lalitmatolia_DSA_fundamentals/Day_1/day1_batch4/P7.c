#include<stdio.h>
int main()
{
	signed auto int x = 10;
	extern int y;
	static int z; //static variable's default value is 0
	
	printf("X=%d Y=%d Z=%d", x, y, z);
}
int y = 100;
