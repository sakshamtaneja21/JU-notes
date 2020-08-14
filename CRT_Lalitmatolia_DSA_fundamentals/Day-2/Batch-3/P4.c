#include<stdio.h>
int main()
{
	int x = 1;
	for(x++; ++x <= 10; x++)
		printf("%d\t", x);
	printf("\n%d", x);
	return 0;
}
/*
x = 1
x++ => x = x + 1; x = 2
2 <= 10		3     5    7    9   11
4 <= 10	
6 <= 10	
8 <= 10
10 <= 10
12 <= 10
*/
