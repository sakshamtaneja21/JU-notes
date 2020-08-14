#include<stdio.h>
int main()
{
	int x = 49;
	while(x-- - 1)
	printf("%d\t", x);
	return 0;
}
/*
x	x--		x-- - 1		while(x-- - 1);
49	49		49 - 1 = 48  while(48);
48  48      48 - 1 = 47

			1 - 1 = 0  while(0);
			
			Final Answer: 0
*/
