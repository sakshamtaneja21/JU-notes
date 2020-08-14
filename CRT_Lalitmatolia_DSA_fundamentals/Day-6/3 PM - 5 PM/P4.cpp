#include<iostream>
using namespace std;
int main()
{
	int a = 6, b = 7, c, d, e, f, g, h;
	
	c = a & b;  // c = 6
	d = a | b;  // d = 7
	e = a ^ b;  // e = 1
	f = a << 2; // f = 24
	g = a >> 2; // g = 1
	h = ~a;     // h = -7
	
	cout<<"C="<<c<<endl;
	cout<<"D="<<d<<endl;
	cout<<"E="<<e<<endl;
	cout<<"F="<<f<<endl;
	cout<<"G="<<g<<endl;
	cout<<"H="<<h<<endl;
	return 0;
}
