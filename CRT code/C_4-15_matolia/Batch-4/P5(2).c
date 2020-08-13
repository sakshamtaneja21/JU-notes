#include<stdio.h>
int main()
{
	int x=1;
	for(x++; x++<=10; x++)
	{
		printf("%d\t", x);
	}
	printf("\n%d", x);
	return 0;
}
/*
x = 1
x++ => x = x + 1 = 1 + 1 = 2
2 <= 10		3
4 <= 10		5
6 <= 10		7
8 <= 10		9
10 <= 10	11
12 <= 10	X
*/
