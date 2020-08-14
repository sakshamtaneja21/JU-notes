#include<stdio.h>
int main()
{
	int x = 1;
	while(++x <= 10)
	{
		++x;
		printf("%d\t", x);
		
	}
}
/*
x = 1
2 <= 10 	3
4 <= 10     5
6 <= 10     7
8 <= 10		9
10 <= 10	11
*/
