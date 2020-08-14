#include<stdio.h>
int main()
{
	int a = 10, *p, **q;
	p = &a;
	q = &p;
	
	printf("%d\n", a);
	printf("%u\n", &a);
	printf("%u\n", p);
	printf("%u\n", &p);
	printf("%u\n", q);
	printf("%u\n", &q);
	printf("%u\n", *p); // *p = *(&a) = a = 10
	printf("%u\n", **q); // **q = **(&p) = *p = *(&a) = a = 10
	printf("%u\n", *q); //*q = *(&p) = p = &a
}
