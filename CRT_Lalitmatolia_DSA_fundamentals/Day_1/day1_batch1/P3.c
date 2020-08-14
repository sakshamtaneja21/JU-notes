#include<stdio.h>
int main()
{
	static int x; // static variable default value is 0
	printf("X=%d", x);
	return 0;
}

// Its value remain persistent during function call also.
