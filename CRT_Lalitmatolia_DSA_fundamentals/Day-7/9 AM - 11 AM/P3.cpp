#include<iostream>
using namespace std;

class student
{
	public:
	static int count;	// private static data member
	public:
		static void showcount()
		{
			cout<<"Count="<<count<<endl;
		}
		static void change()
		{
			count = 500;
			cout<<"Count="<<count<<endl;
		}
};
int student :: count=100;
int main()
{
	//To call the static member function
	//classname::function();
	student obj;
	obj.count = 30;
	student::change();
	student::showcount();
	
	return 0;
}
