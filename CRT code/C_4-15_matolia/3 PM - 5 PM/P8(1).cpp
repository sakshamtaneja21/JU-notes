#include<iostream>
using namespace std;
#define CUBE(x) x * x * x
int main()
{
	char c='A';
	int res;
	res = CUBE(c);
	cout<<"Result="<<res<<endl;
	return 0;
}
