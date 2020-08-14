#include<iostream>
using namespace std;
int main()
{
	//Relational Operator
	int a = 10, b = 20, c, d, e, f, g, h;
	c = a < b;  // c = 10 < 20 = 1
	d = a > b;  // d = 10 > 20 = 0
	e = a <= b; // e = 10 <= 20 = 1
	f = a >= b; // f = 10 >= 20 = 0
	g = a == b; // g = 10 == 20 = 0
	h = a != b; // h = 10 != 20 = 1
	cout<<"C="<<c<<endl;
	cout<<"D="<<d<<endl;
	cout<<"E="<<e<<endl;
	cout<<"F="<<f<<endl;
	cout<<"G="<<g<<endl;
	cout<<"H="<<h<<endl;
	return 0;
}
