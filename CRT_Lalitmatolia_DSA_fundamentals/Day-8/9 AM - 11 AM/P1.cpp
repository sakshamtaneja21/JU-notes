//Single Level Inheritance

#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
};
// class DerivedClass : BaseClass {}
class B : A
{
	private:
		int y;
	public:
		void getdata();
		void showdata();
};
// ReturnType ClassName :: MethodName() {}
void B :: getdata()
{
	cout<<"Enter Value for X and Y"<<endl;
	cin>>x>>y;
}
void B :: showdata()
{
	cout<<"Value of X="<<x<<endl;
	cout<<"Value of Y="<<y<<endl;
}

int main()
{
	B obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
