#include<iostream>
using namespace std;
int main()
{
	int a = 0xFF, b;
	b = a<<4>>12;
	cout<<"A="<<a<<endl<<"B="<<b<<endl;
	return 0;
}
