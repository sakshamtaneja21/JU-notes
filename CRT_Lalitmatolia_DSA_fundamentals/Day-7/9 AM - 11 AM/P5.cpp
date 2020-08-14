#include<iostream>
using namespace std;
class Sample
{
	private:
		static int x, y, z;
		Sample()
		{
			cout<<"Constructor Called"<<endl;
		}
	public:
		static void show()
		{
			Sample o1;
			cout<<"X="<<x<<endl;
			cout<<"Y="<<y<<endl;
			cout<<"Z="<<z<<endl;
		}
};
int Sample::x= 10;
int Sample::y= 20;
int Sample::z= 30;

int main()
{
	Sample::show();
}
