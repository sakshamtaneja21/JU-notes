#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 20, c = 30, max, min;
	max = (a>b)?((a>c)?a:c):((b>c)?b:c);
	min = (a<b)?((a<c)?a:c):((b<c)?b:c);
	cout<<"Max="<<max<<endl;
	cout<<"Min="<<min<<endl;
	return 0;
}

/*
?: (Ternary Operator)
*/
