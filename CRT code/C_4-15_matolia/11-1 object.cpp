#include<iostream>>
using namespace std;

class sample
{
	private:
		int x,y,z;
	public:
		void getdata();
		void showdata();
};

void sample :: getdata()
{
	cout<<"enter 3 numbers";
	cin>>x>>y>>z;
}

void sample :: showdata()
{
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
	cout<<"Z="<<z<<endl;
	
}
int main()
{
	
	sample o1,o2,o3;
	o1.getdata();
	o1.showdata();
	
	o2.getdata();
	o2.showdata();
	
	o3.getdata();
	o3.showdata();
	
	return 0;

}
