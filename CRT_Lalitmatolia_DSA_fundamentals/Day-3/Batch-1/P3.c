#include<stdio.h>
void Swapv(int, int); // Call by Value
void Swapa(int*, int*); // Call by Address

int main()
{
	int a = 10, b = 20;
	Swapv(a, b); // Calling for Call by Value
	printf("In Main A=%d B=%d\n", a, b);
	Swapa(&a, &b); // Calling for Call by Address
	//Swapa(1000, 1002);
	printf("In Main A=%d B=%d\n", a, b);
	return 0;
}
void Swapv(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("In Def A=%d B=%d\n", a, b);
}
void Swapa(int *a, int *b)
{
	// a = 1000, b = 1002
	// *a = 10, *b = 20
	int t;
	t = *a;
	*a = *b;
	*b = t;
	printf("In Def A=%d B=%d\n", *a, *b);
}
