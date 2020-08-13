#include<iostream>
using namespace std;
class Sample
{
	private:
		int x, y, z;
	public:
		Sample() // default constructor
		{
			x = y = z = 0;
		}
		Sample(int x) // one argumented constructor
		{
			this->x = x;
			y = 0;
			z = 0;
		}
		Sample(int x, int y) // two argumented constructor
		{
			this->x = x;
			this->y = y;
			this->z = 0;
		}
		Sample(int x, int y, int z) // three argumented constructor
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		void show()
		{
			cout<<"Value of X="<<x<<endl;
			cout<<"Value of Y="<<y<<endl;
			cout<<"Value of Z="<<z<<endl;
			cout<<endl;
		}
};
int main()
{
	Sample s1; // To call the default constructor
	Sample s2(10); // To call the one argumented constructor
	Sample s3(100, 200); // To call the two argumented constructor
	Sample s4(10, 20, 30); // To call the three argumented constructor
	
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	return 0;
}
