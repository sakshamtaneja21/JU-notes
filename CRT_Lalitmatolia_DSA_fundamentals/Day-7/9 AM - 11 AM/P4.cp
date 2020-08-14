#include<iostream>
using namespace std;
class Student
{
	private:
		static int count;
	public:
		Student()
		{
			count++;
		}
		void show()
		{
			cout<<"Total Object Created:"<<count<<endl;
		}
};
int Student::count = 0;
