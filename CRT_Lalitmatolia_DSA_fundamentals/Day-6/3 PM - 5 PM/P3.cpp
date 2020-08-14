#include<iostream>
using namespace std;
int main()
{
	//Logical Operators in C++
	// && - Logical AND, || - Logical OR, !  Logical NOT
	int a = 10, b = -10, c, d, e;
	c = a && b; // c = 1 && 1 = 1
	d = a || b; // d = 1 || 1 = 1
	e = !a;   // e = !1 = 0
	
	cout<<"C="<<c<<endl;
	cout<<"D="<<d<<endl;
	cout<<"E="<<e<<endl;
	return 0;
}

// Final Answer
/*
C=1
D=1
E=0
*/
/*
Logical Operator
-------------------
Any Positive and Any Negative => True = Non-Zero
Zero = 0 = False

A		B		C=A & B		D = A || B	 E = !A
0		0		0			0				1
0		1		0			1				1
1		0		0			1				0
1		1		1			1				0

*/
