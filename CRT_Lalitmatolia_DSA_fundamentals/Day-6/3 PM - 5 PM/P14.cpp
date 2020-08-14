#include<iostream>
using namespace std;
class Test
{
	private:
		int x, y, z; // data members of the class
		void getdata(); // private method
	public:
		void showdata(); // public method
};
// ReturnType ClassName :: MethodName(Arguments) { }
void Test :: getdata()
{
	cout<<"Enter any three numbers:"<<endl;
	cin>>x>>y>>z;
}
void Test :: showdata()
{
	getdata();
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
	cout<<"Z="<<z<<endl;
}
int main()
{
	Test obj;
	obj.showdata();
	return 0;
}
