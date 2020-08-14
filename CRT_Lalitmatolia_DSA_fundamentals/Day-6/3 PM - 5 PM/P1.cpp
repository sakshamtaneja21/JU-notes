#include<iostream>
using namespace std;
int main()
{
	int a, b, c, sum;
	cout<<"Enter any three numbers"; // << insertion operator
	cin>>a>>b>>c;					// >> extraction operator
	sum = a + b + c;
	cout<<"Sum="<<sum<<endl;
	return 0;
}

/*
In C
--------
printf()
scanf()

In C++
---------
cout<<"Hello";
cin>>a>>b>>c;

*/
