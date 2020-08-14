#include<stdio.h>
int main()
{
	int a[2][2] = {10, 20, 30, 40};
	printf("%u\n", a); // Base Address of 2-D Array
	printf("%u\n", a + 1);
	printf("%u\n", a + 2);
	
	printf("%u\n", *a); // Base Address of 1-D Array inside 2-D
	printf("%u\n", *a + 1);
	
	printf("%u\n", **a);
	
	printf("%u\n", &a+1);
	printf("%u\n", &a[1][1]);
	return 0;
}
