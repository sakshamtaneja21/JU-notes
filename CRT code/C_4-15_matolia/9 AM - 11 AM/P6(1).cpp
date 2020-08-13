// Hierarchical Inheritance
#include<iostream>
using namespace std;
class A
{
	protected:
		int x;	
};
class B : A
{
	protected:
		int y;
	public:
		void getXY()
		{
			cout<<"Enter Value of X and Y"<<endl;
			cin>>x>>y;
		}
		void showXY()
		{
			cout<<"Value of X="<<x<<endl;
			cout<<"Value of Y="<<y<<endl;
		}
};
class C : A
{
	protected:
		int z;
	public:
		void getXZ()
		{
			cout<<"Enter Value of X and Z"<<endl;
			cin>>x>>z;
		}
		void showXZ()
		{
			cout<<"Value of X="<<x<<endl;
			cout<<"Value of Z="<<z<<endl;
		}
};
class D : A
{
	protected:
		int w;
	public:
		void getXW()
		{
			cout<<"Enter Value of X and W"<<endl;
			cin>>x>>w;
		}
		void showXW()
		{
			cout<<"Value of X="<<x<<endl;
			cout<<"Value of W="<<w<<endl;
		}
};
int main()
{
	B ob;
	ob.getXY();
	ob.showXY();
	
	C oc;
	oc.getXZ();
	oc.showXZ();
	
	return 0;
}

