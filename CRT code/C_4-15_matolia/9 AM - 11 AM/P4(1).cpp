// Single Level Inheritance
#include<iostream>
using namespace std;

class A
{
	protected:
		int x;
	public:
		void getX()
		{
			cout<<"Enter Value for X"<<endl;
			cin>>x;
		}
		void showX()
		{
			cout<<"Class A: Value of X="<<x<<endl;
		}
};
class B : A
{
	private:
		int y;
	public:
		void getXY()
		{
			cout<<"Enter Value for X and Y"<<endl;
			cin>>x>>y;
		}	
		void showXY()
		{
			cout<<"Class B: Value of X="<<x<<endl;
			cout<<"Class B: Value of Y="<<y<<endl;
		}
};
int main()
{
	B ob;
	ob.getXY();
	ob.showXY();
}

