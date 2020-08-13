#include<stdio.h>
int main()
{
	int x = 1;
	while(++x <= 10)
	{
		x++;
		printf("%d\t", x);
		++x;
	}
	return 0;
}
/*
x = 1
2 <= 10		3
5 <= 10		6
8 <= 10		9
11 <= 10	x (out of the loop)
*/
