//MultiLevel Inheritance with Constructor and Destructor
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
class C : B
{
	public:
		C()
		{
			cout<<"Class C Constructor"<<endl;
		}
		~C()
		{
			cout<<"Class C Destructor"<<endl;
		}
};
int main()
{
	C ob;
	return 0;
}
