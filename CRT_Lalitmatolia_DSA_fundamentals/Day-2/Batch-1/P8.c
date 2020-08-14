#include<stdio.h>
int func(int*, int*); // Function Prototype

/*
Function Prototype means:
1. What is the name of the function?
2. What is the return type of the function?
3. How many parameters its takes?
*/
int main()
{
	int a = 10, b = 20;
	func(&a, &b); //Function Calling Part
	printf("In Main Function A=%d B=%d\n", a, b);
	return 0;
}
int func(int *a, int *b) //Function Definition Part
{
	int t;
	t = *a; // t = 10
	*a = *b; // a = 20
	*b = t; // b = 10
	printf("In Function Definition A=%d B=%d\n", *a, *b);
}

/*
1. Function without argument and without return type.
2. Function without argument and with return type.
3. Function with argument and without return type.
4. Function with argument and with return type.
*/
