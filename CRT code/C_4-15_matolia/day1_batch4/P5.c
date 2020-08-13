#include<stdio.h>
int a; // global variable: default value for global variable is 0
int main()
{
	a++;
	printf("Global Variable=%d\n", a);
	int a = 100; //local variable defined inside the function()
	a++;
	printf("Local Variable=%d\n", a);
	{
		int a = 500;
		a++;
		printf("Block Variable=%d\n", a);
	}
	a++;
	printf("Local Variable=%d\n", a);
	return 0;
}
