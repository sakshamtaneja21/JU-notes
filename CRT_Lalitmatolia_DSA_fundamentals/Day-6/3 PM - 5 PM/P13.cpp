#include<iostream>
using namespace std;
class Test
{
	private:
		int x, y, z; // data members of the class
	public:
		void getdata(); // method of the class
		void showdata();
};
// ReturnType ClassName :: MethodName(Arguments) { }
void Test :: getdata()
{
	cout<<"Enter any three numbers:"<<endl;
	cin>>x>>y>>z;
}
void Test :: showdata()
{
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
	cout<<"Z="<<z<<endl;
}
int main()
{
	Test obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
