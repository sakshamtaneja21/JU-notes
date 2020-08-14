//Multiple Inheritance
#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
};
class B
{
	protected:
		int y;
};
class C
{
	protected:
		int z;
};
class D : A, B, C
{
	protected:
		int w;
	public:
		void getdata();
		void showdata();
};

void D :: getdata()
{
	cout<<"Enter value for x, y, z and w"<<endl;
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
	D obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
