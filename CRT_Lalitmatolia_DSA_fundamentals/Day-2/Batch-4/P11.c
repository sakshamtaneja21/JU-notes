#include<stdio.h>
int main()
{
	int a = 10, *p, **q;
	p = &a;
	q = &p;
	
	printf("%d\n", a);	// 10
	printf("%u\n", &a); //Address of a
	printf("%u\n", p); // Address of a
	printf("%u\n", &p); // Address of p
	printf("%u\n", q); // Address of p
	printf("%u\n", &q); // Address of q
	printf("%u\n", *p); // *p = *(&a) => a = 10
	printf("%u\n", *q); // *q = *(&p) => p = Address of a
	printf("%u\n", **q); // **q = **(&p) = *p = *(&a) => a = 10
	
	return 0;
}
