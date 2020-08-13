#include<stdio.h>
int x=10;
int main()
{
	// while(x--);
	
	while(--x)    // +ve and -ve value is treated as non-zero, for non-zero (true)
	{
		
		;
	}
	
	printf("\nOutside X=%d", x);
	return 0;
}
