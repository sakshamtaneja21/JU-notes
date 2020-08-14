#include<iostream>
# define MAX  10
using namespace std;

int a=200; // Global Variable
int main()
{
	int max  = 400;
	a = 300;
	int a = 100; // Local Variable
	cout<<"Local Variable="<<a<<endl;
	cout<<"Global Variable="<<::a<<endl;
	cout<<MAX<<endl;
	return 0;
}
