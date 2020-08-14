#include<stdio.h>
int main()
{
	int x=1;
	for(x++; ++x<=10; x++)
	printf("%d\t", x);
	return 0;
}
/*
x = 1
x++ => x = x+1 = 2
3 <= 10		3
5 <= 10		5
7 <= 10		7
9 <= 10		9
11 <= 10	x
*/
