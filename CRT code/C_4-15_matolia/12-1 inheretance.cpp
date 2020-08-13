#include<iostream>
using namespace std;

class A
{
	public:
		int x;
};

clas B : A
{
	private:
		int y;
	public:
		void getdata();
		void showdata();
};

Void B :: getdata()
{
	cout<<"enter value of x and y"<<endl;
	cin>>x>>y;
}

Void B :: showdata()
{
	cout<<"value of X ="<<x<<endl;
	cout<<"value of y = "<<y<,endl;
}

int main()
{
	
}

