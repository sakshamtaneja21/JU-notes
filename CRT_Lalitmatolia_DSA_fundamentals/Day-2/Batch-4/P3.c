#include<stdio.h>
int main()
{
	int x = 49;
	while(x--);
	printf("%d", x); // -1
	return 0;
}
/*
x = 49
while(49); x = x - 1; x = 49 - 1 = 48
while(48); 
while(47);

........
..........
while(1); x = x - 1; x = 1 - 1 = 0
while(0); x = x- 1; x = 0 - 1  = -1
*/
