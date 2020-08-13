/*
1. Function without argument and without return type
2. Function without argument and with return type
3. Function with argument and without return type
4. Function with argument and with return type

Function Prototype
-----------------------
1. What is the name of the function?
2. What are the parameters/arguments of the functions?
3. What is the return type of the function?
*/
#include<stdio.h>
//Function Prototype Declaration
void Add(void);
int Sub(void);
void Rem(int, int);
int Mul(int, int);

int main()
{
	int sub, a=4, b=3, mul;
	Add();
	sub = Sub();
	printf("Subtraction=%d\n", sub);
	Rem(a, b);
	mul = Mul(a, b);
	printf("Multiplication=%d\n", mul);
	return 0;
}
// Definition for Add()
void Add()
{
	int a = 100, b = 200, c;
	c = a + b;
	printf("Addition=%d\n", c);
}

// Definition for Sub()
int Sub(void)
{
	int a = 34, b= 44;
	return(a-b);
}

// Definition for Rem()
void Rem(int a, int b)
{
	printf("Remainder=%d\n", a % b);
}

// Definition for Mul()
int Mul(int a, int b)
{
	return (a*b);
}



