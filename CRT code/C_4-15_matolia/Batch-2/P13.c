#include<stdio.h>
int Add(int, int);
int main()
{
	int a = 10, b = 20;
	Add(a, b); // Function Calling (Actual Parameter)
	printf("In Main A=%d B=%d\n", a, b);
	return 0;
}
int Add(int a, int b) // Formal Parameter
{
	int t;
	t = a;
	a = b;
	b = t;
	printf("In Function Def A=%d B=%d\n", a, b);
}
