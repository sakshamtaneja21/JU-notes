#include<iostream>
using namespace std;
class sample
{
	private:
		int x, y, z;
	public:
		sample()
		{
			x = y = z;
			
		}
		
		sample(int x)
		{
			this->x = x;
			this->y = 0;
			this->z = 0;
		}
		
		sample(int x, int y)
		{
			this->x = x;
			this->y = y;
			this->z = 0;
		}
		
		sample(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		
		void show()
		{
			cout<< "value of X="<<x<<endl;
			cout<< "value of Y="<<y<<endl;
			cout<< "value of Z="<<z<<endl;
			cout<<endl;
		}
};

int main()
{
	
	sample s1;
	sample s2(10);
	sample s3(100, 200);
	sample s4(100, 200, 300);
	
	
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	
	return 0;
}
