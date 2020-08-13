// function overloding
// polimorphism

#include<iostream>
using namespace std;

class sample
{
	private:
		int x, y, z;
	public:
		sample(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		void func(int a)
		{
			cout<<"A is = "<<a<<endl;
		}
		void func(int a, int b)
		{

		}
		void func(int a, int b, int c)
		{
			
		}
	
};

int main()
{
	
}
