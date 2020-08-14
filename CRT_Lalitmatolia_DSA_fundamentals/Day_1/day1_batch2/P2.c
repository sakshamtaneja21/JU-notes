#include<stdio.h>
#include "my.h"

int main()
{
	extern int x;
	printf("%d", x);
	return 0;
}

