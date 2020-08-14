//Pointer: Pointer is a variable which store the address of another variable.
#include<stdio.h>
int main()
{
	int a = 10, *p;
	p = &a;
	
	printf("%d\n", a); // 10
	printf("%u\n", &a); //Address of a
	printf("%u\n", p); // Address of a
	printf("%u\n", &p); // Address of p
	
	printf("%u\n",*p); // *p = *(&a) = a = 10
	printf("%u\n", *(&a)); // *(&a) = a = 10
	return 0;
}
/*
& = It is the referential operator
* = It is the de-referential operator
*/
