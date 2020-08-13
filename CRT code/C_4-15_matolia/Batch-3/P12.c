/*
Function Prototype
1. What is the name of the function?
2. What is the return type of the function?
3. How many parameters it takes?

ReturnType FunctionName(Parameters);

1. Function without argument and without return type
	void Add(void);
	
2. Function with argument and without return type
	void Sub(int, int);
	
3. Function without argument and with return type
	int Mul(void);
	
4. Function with argument and with return type
	int Rem(int, int);
*/

#include<stdio.h>
void Add(void); //Function Prototype Declaration
int main()
{
	Add(); // Function Calling
	printf("Hello");
}
void Add()
{
	int a = 10, b = 20, c;
	c = a + b;
	printf("C=%d\n",c);
}

