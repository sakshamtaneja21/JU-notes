#include<stdio.h>
#include "p10.h"

int z = 900;
int main()
{
	extern int z;
	printf("Z=%d", z);
	return 0;
}
