#include<stdio.h>
int x=100; // Global Variable, default value for global variable is 0.
int main()
{
	x++;
	printf("Global X=%d", x);
	int x = 200; //Local Variable, default for local variable is garbage
	printf("\nLocal X=%d", x);
	return 0;
}
