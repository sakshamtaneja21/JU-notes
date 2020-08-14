//Multiple Inheritance with Constructor and Destructor
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"In Class A Constructor"<<endl;
		}
		~A()
		{
			cout<<"In Class A Destructor"<<endl;
		}
};
class B
{
	public:
		B()
		{
			cout<<"In Class B Constructor"<<endl;
		}
		~B()
		{
			cout<<"In Class B Destructor"<<endl;
		}
};
class C
{
	public:
		C()
		{
			cout<<"In Class C Constructor"<<endl;
		}
		~C()
		{
			cout<<"In Class C Destructor"<<endl;
		}
};
class D : C, B, A
{
	public:
		D()
		{
			cout<<"In Class D Constructor"<<endl;
		}
		~D()
		{
			cout<<"In Class D Destructor"<<endl;
		}
};
int main()
{
	D ob;
	return 0;
}
