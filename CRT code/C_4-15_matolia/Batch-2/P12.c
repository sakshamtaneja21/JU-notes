// Function
/*
Function Prototype
1. What is the name of the function?
2. What is the return type of the function?
3. How many parameter it takes?

1. Function without argument and without return type:  void Add(void);
2. Function without argument and with return type: int Sub(void);
3. Function with argument and without return type: void Rem(int, int);
4. Function with argument and with return type: int Mul(int, int);
*/
#include<stdio.h>
void Add(void); // Prototype Declaration
int main()
{
	Add(); //Function Calling
	printf("Hello");
	return 0;
}
void Add()
{
	int a = 10, b = 20, c;
	c = a + b;
	printf("%d\n", c);
}
