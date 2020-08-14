#include<stdio.h>
int main()
{
	int x = 1;
	while(x++ <= 10)
	{
		printf("%d\t", x);
	}
	return 0;
}
/*
x = 1
1 <= 10     2
2 <= 10		3
3 <= 10		4
4 <= 10		5
5 <= 10		6
6 <= 10		7
7 <= 10  	8
8 <= 10		9
9 <= 10		10
10 <= 10	11
11 <= 10    X (comes out of the loop)


*/
