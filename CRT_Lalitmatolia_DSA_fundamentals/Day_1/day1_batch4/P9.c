#include<stdio.h>
int main()
{
	int x = 10;
	while(x>=1)
	{
		printf("%d\n", x); 
		x--;
	}
	return 0;
}
/*
10
9
8
7
.
.
.
.
1


*/
/*
Entry Controlled Loop: You are checking the condition at entry point.
initialization;
while(condition)
{
	statement;
	increment/decrement;
}


*/
