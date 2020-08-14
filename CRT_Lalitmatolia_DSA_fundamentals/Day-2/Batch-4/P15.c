#include<stdio.h>
int main()
{
	int a = -2, b = 5;
	junk(a, &b);
	printf("\nIn Main A=%d B=%d\n", a, b); // A = -2 B = 25
	return 0;
}
junk(int a, int *b) // a = call by value, b = call by address
{
	a = a * a; // a = -2 * -2 = 4
	*b = *b * *b; // *b = 5 * 5 = 25
	printf("\nIn Def A=%d B=%d", a, *b); // A = 4 B = 25
}
