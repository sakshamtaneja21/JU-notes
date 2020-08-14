#include<iostream>
using namespace std;
int main()
{
	int a=10, b=20, c=30, d, e;
	d = (a, b, c);
	e = a, b, c;
	cout<<"D="<<d<<endl;
	cout<<"E="<<e<<endl;
	return 0;
}
