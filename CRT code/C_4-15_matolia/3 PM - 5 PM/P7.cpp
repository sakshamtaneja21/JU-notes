#include<iostream>
using namespace std;
#define CUBE(x) x * x * x
int main()
{
	int a = 5, b = 2, res;
	res = CUBE(a+b);
	cout<<"Result="<<res<<endl;
	return 0;
}
/*
res = x * x * x
    = 5 + 2 * 5 + 2 * 5 + 2
    = 5 + 10 + 10 + 2
    = 27
*/
