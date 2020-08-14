#include<iostream>
using namespace std;
class TWO; // forward declaration of class TWO
class ONE
{
	private:
		int x, y;
	public:
		void enter()
		{
			cout<<"Enter the values of x and y"<<endl;
			cin>>x>>y;
		}
		friend class TWO;
		// class TWO declared as friend of class ONE
		// so all the member functions of TWO can access private data of ONE
};
class TWO
{
	public:
		void show(ONE ob)
		{
			cout<<"Private data of class ONE is shown below";
			cout<<"The number of x and y are";
			cout<<"X="<<ob.x<<"Y="<<ob.y<<endl;
		}
};
int main()
{
	ONE ob1;
	TWO ob2;
	ob1.enter();
	ob2.show(ob1);
	return 0;
}
