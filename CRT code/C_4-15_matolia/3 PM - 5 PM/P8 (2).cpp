#include<iostream>
using namespace std;
int main()
{

	union
	{
		int no;
		char ch;
	}u;
	u.ch='2';
	u.no=0;
	cout<<u.ch<<endl;
	return 0;
}

