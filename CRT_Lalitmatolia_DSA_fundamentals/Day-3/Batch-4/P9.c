//WAP to input any two numbers and swap the numbers
// without using temp variable and without using arithmetic operator
// +, - , *, / , *, temp X

/*
t = a;
a = b;
b = t;

a = a + b;
b = a - b;
a = a - b;

a = a ^ b;
b = a ^ b;
a = a ^ b;

Truth Table for XOR(^)
-------------------------------
A		B		Y = A ^ B
-------------------------------
0		0		0
0		1		1
1		0		1
1		1		0
-------------------------------

a = 10
b = 15

	1010
	1111
---------------
a = 0101
    1111
----------------
b = 1010 (b=10)
    0101
----------------
a = 1111 (a=15)
*/
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter any two number:");
	scanf("%d%d",&a, &b);
	printf("Before Swapping A=%d B=%d\n", a, b);
	
	//Logic
	/*
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	*/
	
	a^=b^=a^=b;
	
	printf("After Swapping A=%d B=%d\n", a, b);
	return 0;
}
