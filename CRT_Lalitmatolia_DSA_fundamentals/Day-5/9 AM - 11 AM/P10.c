#include<stdio.h>
int main()
{
	int x = 1;
	switch(x)
	{
		case 1:
			++x; // x = x + 1; // 2
		case 2:
			++x + 2; // 3 + 2 ==> x = 3
		case 3:
			x++; // x = x + 1; // 4
		default:
			++x; // x = x + 1 // 5
	}
	printf("%d\t", ++x);
}
