#include<stdio.h>
int main()
{
	int x;
	for(x=1; x <= 10; x++)
	{
		printf("%d\t", x);
	}
	return 0;
}

/*
for(initialization; condition; increment/decrement)
{
	statement;
}

x = 1; 1 <= 10	1   2   3 ................ 10
       2 <= 10  
       3 <= 10 

	10 <= 10
	11 <= 10 x
*/
