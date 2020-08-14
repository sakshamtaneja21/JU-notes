// Multipath Inheritance
#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
};
class B : public virtual A
{
	protected:
		int y;
};
class C : virtual public A
{
	protected:
		int z;
};
class D :  B,  C
{
	protected:
		int w;
	public:
		void getdata();
		void showdata();
};
void D :: getdata()
{
	cout<<"Value of X, Y, Z and W"<<endl;
	cin>>x>>y>>z>>w;
}
void D :: showdata()
{
	cout<<"Value of X="<<x<<endl;
	cout<<"Value of Y="<<y<<endl;
	cout<<"Value of Z="<<z<<endl;
	cout<<"Value of W="<<w<<endl;
}
int main()
{
	D ob;
	ob.getdata();
	ob.showdata();
	return 0;
}



