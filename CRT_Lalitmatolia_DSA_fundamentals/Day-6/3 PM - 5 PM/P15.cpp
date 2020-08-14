#include<iostream>
using namespace std;
//macro definition
#define X 30
//global integer constantt
const int Y=10;

int func(void);
int main()
{
	//local ineteger constant
	cout<<"Value of X: in main"<<X<<endl; // 30
	cout<<"Value of Y:"<<Y<<endl; // 10
	func();
	return 0;
}

int func()
{
	cout<<"Value of X:1st"<<X<<endl; // 30
	#undef X
	#define X 300
	cout<<"Value of X:"<<X<<endl; // 300
	return 0;
}


