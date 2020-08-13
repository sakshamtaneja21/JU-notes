#include<stdio.h>
int main()
{
	int x = 10;
	do
	{
		printf("%d\t", x * 3);
		x -= 1; // x = x - 1;
	}while(x > 0);
	return 0;
}
