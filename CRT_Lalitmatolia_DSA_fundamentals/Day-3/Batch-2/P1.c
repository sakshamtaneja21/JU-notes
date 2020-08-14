/*
1. Function without argument and without return type
	void Add(void);
	
2. Function without argument and with return type
	int Sub(void);
	
3. Function with argument and without return type
	void Mul(int, int);
	
4. Function with argument and with return type
	int Rem(int, int);

Function Prototype
-----------------------
1. What is the name of the function?
2. What is its return type?
3. How many parameters it takes?
*/
#include<stdio.h>
void Add(void);
int Sub(void);
void Mul(int, int);
int Rem(int, int);

int main()
{
	int sub, rem, a = 10, b = 20, p;
	Add(); //Function Calling
	sub = Sub();
	printf("Subtraction=%d\n", sub);
	Mul(a, b);
	rem = Rem(a, b);
	printf("Remainder=%d", rem);
	
	return 0;
}
void Add()
{
	int a = 10, b = 20, c;
	c = a + b;
	printf("Addition=%d\n", c);
}
int Sub()
{
	int a = 10, b = 20;
	return(a-b);
}
void Mul(int a, int b)
{
	printf("Multiplication=%d\n", a * b);
}
int Rem(int a, int b)
{
	return(a % b);
}

