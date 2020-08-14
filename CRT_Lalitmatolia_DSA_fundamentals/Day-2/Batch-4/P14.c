#include<stdio.h>
// Function without return type but with arguments
void Swap(int*, int*); // Prototype Declaration
int main()
{
	int a = 10, b = 20;
	Swap(&a, &b); // (a, b = actual parameters) // Swap(1000, 1002);
	printf("\nIn Main A=%d B=%d\n", a, b); // A = 20 B = 10
	return 0;
}
void Swap(int *x, int *y) // a = 10, b = 20 (a, b  = formal parameters)
{
	// a = 1000, b = 1002; *a = 10, *b = 20
	int t;
	t = *x;
	*x = *y;
	*y = t;
	printf("\nIn Func Def A=%d B=%d\n", *x, *y); // A = 20 B = 10
}
