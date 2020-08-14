#include<stdio.h>
int func(int, int); // Function Prototype
int main()
{
	int a = 10, b = 20;
	func(a, b); //Function Calling Part
	printf("In Main Function A=%d B=%d\n", a, b);
	return 0;
}
int func(int a, int b) //Function Definition Part
{
	int t;
	t = a; // t = 10
	a = b; // a = 20
	b = t; // b = 10
	printf("In Function Definition A=%d B=%d\n", a, b);
}
