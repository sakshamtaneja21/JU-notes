/*
Function Prototype
----------------------
1. What is the name of the function?
2. What is the return type of the function?
3. How many parameters it takes?

ReturnType	FunctionName(Parameter);
void Add(void);

1. Function without argument and without return type
	void Add(void);
2. Function without argument and with return type
	int Sub(void);
3. Function with argument and without return type
	void Mul(int, int);
4. Function with argument and with return type
	int Rem(int, int);
*/

#include<stdio.h>
void Add(void);
int main()
{
	Add(); // Function Calling
	printf("Hello");
	return 0;
}
void Add()
{
	int a = 10, b = 20, c;
	c = a + b;
	printf("C=%d\n", c);
}
