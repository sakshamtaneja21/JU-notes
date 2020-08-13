#include<iostream>
using namespace std;

#define SQR(x) x * x

int main()
{
	int a = 3, b = 2, res;
	res = SQR(a+b); // res = SQR(3+2); res = 3+2*3+2 = 3 + 6 + 2 = 11
	cout<<"Result="<<res;
	return 0;
}
