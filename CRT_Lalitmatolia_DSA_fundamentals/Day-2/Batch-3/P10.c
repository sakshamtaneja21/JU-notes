#include<stdio.h>
int main()
{
	int a = 10, b = 20, c = 30, d = 40, e = 50;
	printf("Address of Variables a, b, c, d and e\n");
	printf("%u\n", &a);
	printf("%u\n", &b);
	printf("%u\n", &c);
	printf("%u\n", &d);
	printf("%u\n", &e);
	
	printf("Value of Variable at &a, &b, &c, &d, &e\n");
	printf("%u\n", *(&a));
	printf("%u\n", *(&b));
	printf("%u\n", *(&c));
	printf("%u\n", *(&d));
	printf("%u\n", *(&e));
	
	return 0;
}
