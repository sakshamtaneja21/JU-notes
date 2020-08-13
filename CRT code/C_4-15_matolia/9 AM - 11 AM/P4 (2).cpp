#include<iostream>
using namespace std;
class Student
{
	private:
		static int count; // static data member
	public:
		Student() // Constructor
		{	
			count++;
		}
		void show()
		{
			cout<<"Total Object Created:"<<count<<endl;
		}
};
int Student :: count = 0;
int main()
{
	/*Student o1;
	o1.show();
	Student o2;
	o2.show();
	Student o3;
	o3.show();*/
	
	Student o1, o2, o3, o4, o5, o6;
	o1.show();
	o2.show();
	o3.show();
	o4.show();
	o5.show();
	o6.show();
	return 0;
}
