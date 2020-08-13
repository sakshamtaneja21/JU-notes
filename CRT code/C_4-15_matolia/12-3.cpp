#include<iostream>
using namespace std;

class A
{
	
	protected:
		int x;
	public:
		void getx()
		{
			cout<<"Enter value for x"<<endl;
			cin>>x;
		}
		void showx()
		{
			cout<<"Value of x ="<<x<<endl;
			
		}
		
};

Class B : A
{
	private:
		int y;
	public:
		void getxy()
		{
			cout<<"eter value of x and y"<<endl;
			cin >> x >> y;
		}
		
		void showxy()
		{
			cout<<"Value of x ="<<x<<endl;
			cout<<"Value of y ="<<y<<endl;
		}
};

int main()
{
	A ob;
	B obj;
	
	ob.getx();
	ob.showx();
	
	
	
	obj.showxy();
	
}
