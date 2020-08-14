#include<iostream>
using namespace std;
#define CUBE(x) (x) * (x) * (x)
#define MAX 10

int main()
{
	int a=5, b=2, res;
	res = CUBE(a+b);
	cout<<"Result="<<res<<endl;
	cout<<MAX;
	return 0;
}
