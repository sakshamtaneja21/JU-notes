#include<iostream>
using namespace std;
class Test
{
	private:
		int x;
	public:
		int y;
		void getdata()
		{
			cout<<"Enter value for X, Y and Z"<<endl;
			cin>>x>>y>>z;
		}
		void showdata()
		{
			cout<<"Value of X="<<x<<endl;
			cout<<"Value of Y="<<y<<endl;
			cout<<"Value of Z="<<z<<endl;
		}
	protected:
		int z;
};
int main()
{
	Test obj;
	obj.getdata();
	obj.showdata();
	
	return 0;
}
