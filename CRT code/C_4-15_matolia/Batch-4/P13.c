#include<stdio.h>
// Function without return type but with arguments
void Swap(int, int); // Prototype Declaration
int main()
{
	int a = 10, b = 20;
	Swap(a, b); // Swap(10, 20); (a, b = actual parameters)
	printf("\nIn Main A=%d B=%d\n", a, b);
	return 0;
}
void Swap(int a, int b) // a = 10, b = 20 (a, b  = formal parameters)
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("\nIn Func Def A=%d B=%d\n", a, b);
}
/*
Call by Value: In case of call by value, if you change in the formal parameter
then actual parameters value doesn't affected.

Call by Address: In case of call by value, if you change in the formal parameter
then actual parameters value get changed.
*/
