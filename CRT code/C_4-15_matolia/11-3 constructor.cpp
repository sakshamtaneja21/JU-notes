#include<iostream>
using namespace std;
class sample
{
	
	private:
		int x,y,z;
	public:
sample()
		{
			x=y=z =0;
		}
		void show()
		{
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y<<endl;
			cout<<"Z="<<z<<endl;
		}
};

int main()
{
	
	sample o1;
	o1.show();
}
