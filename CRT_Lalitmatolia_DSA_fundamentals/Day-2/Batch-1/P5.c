#include<stdio.h>
int main()
{
	int a = 10, *p;
	p = &a;
	printf("a=%d\n",a);  // 10
	printf("&a=%u\n",&a);
	printf("p=%u\n",p);
	printf("&p=%u\n", &p);
	printf("*p=%u\n", *p); // *p = *(&a) => a = 10
	printf("*(&a)=%u\n", *(&a)); // *(&a) => a = 10
	return 0;
}

/*
Pointer is a variable which stores the address of another variable.
* = de-referential operator
& = referential operator
*/
