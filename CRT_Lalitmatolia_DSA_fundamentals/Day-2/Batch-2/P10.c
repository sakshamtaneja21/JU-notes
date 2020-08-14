#include<stdio.h>
int main()
{
	int a = 10, *p;
	p = &a; //Pointer is a variable, which stores the address of another variable
	
	printf("%d\n", a);
	printf("%u\n", &a);
	printf("%u\n", p);
	printf("%u\n", &p);
	printf("%u\n", *p);  // *p = *(&a) => a = 10
	printf("%u\n", *(&a)); // *(&a) = a = 10
	printf("%u\n", &(*p));
	*p = 1000;
	printf("%u\n", *p);
	return 0;
}
/*
& = referential operator
* = de-referential operator
*/
/*
a		p
10		1000
1000	1004

*/
