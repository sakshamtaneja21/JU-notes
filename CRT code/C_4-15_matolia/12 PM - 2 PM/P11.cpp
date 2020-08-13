// Single Level Inheritance with Constructor and Destructor
/*
Constructor calling will be in the same  as per the declaration
but destructor calling will be in the reverse order of constructor.
*/
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Class A Constructor"<<endl;	
		}	
		~A()
		{
			cout<<"Class A Destructor"<<endl;
		}
};
class B : A
{
	public:
		B()
		{
			cout<<"Class B Constructor"<<endl;	
		}
		~B()
		{
			cout<<"Class B Destructor"<<endl;
		}
};
int main()
{
	B obj;
	return 0;
}
