#include<iostream>
using namespace std;

class A
{
	protected:
		int x;
};

class B : virtual public A
{
	protected:
		int y;
};

class C : virtual public A
{
	protected:
		int z;
	
};

class D : B, C
{
	protected:
		int w;
	public:
		void getdata();
		void showdata();
};

void D :: getdata()
{
	cout<<"value of x, y, z, w"<<endl;
	cin>>x>>y>>z>>w;
}

void D :: showdata()
{
	cout<<"value of x"<<x<<endl;
	cout<<"value of y"<<y<<endl;
	cout<<"value of z"<<z<<endl;
	cout<<"value of w"<<w<<endl;
	
}

int main()
{
	
	D ob;
	ob.getdata();
	ob.showdata();
	
}
