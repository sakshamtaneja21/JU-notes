#include<stdio.h>
int main()
{
	int x = 49;
	while(x--);
	printf("%d", x);
}
/*
x--
while(x) => x = x - 1;
while(49); x = 48
while(48); x = 47
while(47); x = 46
while(46); x = 45
................
................
while(1); x = 0
while(0); x = -1

--x
while(48);
while(47);
........
........
while(1);
while(0);
*/
