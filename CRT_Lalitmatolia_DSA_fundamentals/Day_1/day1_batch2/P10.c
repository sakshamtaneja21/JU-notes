#include<stdio.h>
int main()
{
	int x=1;
	do
	{
		x++;
		printf("%d\t", x);
	}while(x++ <= 10);
	return 0;
}

/*
x = 1
1 <= 10	 3
3 <= 10  5
5 <= 10  7
7 <= 10  9
9 <= 10  11
*/
