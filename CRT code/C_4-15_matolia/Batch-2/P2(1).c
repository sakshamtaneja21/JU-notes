// Call by Value and Call by Address
/*
Call by Value: If you change in the formal parameter, then
actual parameter value doesn't gets affected.

Call by Address: If you change in the formal parameter, then
actual parameter value also gets changed.
*/

#include<stdio.h>
void CallByValue(int, int);
void CallByAddress(int*, int*);

int main()
{
	int a = 10, b = 20;
	CallByValue(a, b);
	printf("In Main A=%d B=%d\n", a, b);
	CallByAddress(&a, &b);
	// CallByAddress(1000, 1002);
	printf("In Main A=%d B=%d\n", a, b);
	return 0;
}
void CallByValue(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	printf("In Def A=%d B=%d\n", x, y);
}
void CallByAddress(int *a, int *b)
{
	// a = 1000, b = 1002
	// *a = 10, *b = 20
	int t;
	t = *a;
	*a = *b;
	*b = t;
	printf("In Def A=%d B=%d\n", *a, *b);
}
