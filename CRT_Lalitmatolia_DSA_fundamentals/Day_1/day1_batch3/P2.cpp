#include<iostream>
using namespace std;
int x = 100;
int main()
{
	int x = 200;
	cout<<"Global Variable="<<::x<<endl;
	cout<<"Local Variable="<<x<<endl;
	return 0;
}
