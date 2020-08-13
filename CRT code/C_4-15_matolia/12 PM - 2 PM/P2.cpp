#include<iostream>
using namespace std;
class Sample
{
	private:
		int x, y, z;
	public:
		Sample(int a, int b, int c) // parameterized constructor
		{
			this->x = a;
			this->y = b;
			this->z = c;
		}
		//classname(classname &var) {}
		Sample(const Sample &obj) // copy constructor
		{
			this->x = obj.x;
			this->y = obj.y;
			this->z = obj.z;
		}
		void display() // Method
		{
			cout<<"Value of X="<<x<<endl;
			cout<<"Value of Y="<<y<<endl;
			cout<<"Value of Z="<<z<<endl;
			cout<<endl;
		}
};
int main()
{
	Sample s1(10, 20, 30);
	Sample s2(s1);
	Sample s3(s1);
	Sample s4(s3);
	Sample s5 = s4;
	
	s1.display();
	s2.display();
	s3.display();
	s4.display();
	s5.display();
}
