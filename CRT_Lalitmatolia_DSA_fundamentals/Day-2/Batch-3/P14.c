#include<stdio.h>
void Swap(int*, int*); // Function without return type and with argument
int main()
{
	int a = 10, b = 20;
	Swap(&a, &b); //Function calling (Actual Parameter)
	printf("In Main A=%d B=%d\n", a, b); // A = 10 B = 20
	return 0;
}
void Swap(int *a, int *b) // Formal Parameter
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	printf("In Def A=%d B=%d\n", *a, *b); // A = 20 B = 10
}
