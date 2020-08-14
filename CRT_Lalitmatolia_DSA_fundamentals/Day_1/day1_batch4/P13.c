#include<stdio.h>
int main()
{
	int x = 1;
	while(++x <= 10)
	{
		printf("%d\t", x);
		++x;
	}
	return 0;
}
/*
x = 1
2 <= 10		2
4 <= 10		4
6 <= 10		6
8 <= 10		8
10 <= 10	10
12 <= 10     X (comes out of the loop)
*/
