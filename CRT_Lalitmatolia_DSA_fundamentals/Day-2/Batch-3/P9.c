//Pointer is a variable which stores the address of another variable.
#include<stdio.h>
int main()
{
	int a = 10, *p;
	p = &a;
	
	printf("%d\n", a); // 10
	printf("%u\n", &a); // Address of A
	printf("%u\n", p); // Address of A
	printf("%u\n", &p); // Address of P
	printf("%d\n", *p); // *p = *(&a) = a = 10
	printf("%d\n", *(&a)); // *(&a) = a = 10
	printf("%u\n", *(&p));
	printf("%u\n", &(*p));
}
/*
& = Referential Operator = Address Operator
* = De-referential Operator = Value at that address
*/
