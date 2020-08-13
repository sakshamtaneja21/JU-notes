#include<iostream>
using namespace std;



class test
{
	private:
		int x;
	public:
		int y;
		void getdata()
		{
			cout<<"enter value of x and y"<<endl;
	cin>>x>>y;
}
		void showdata()
		{
			cout<<"value of X ="<<x<<endl;
	cout<<"value of y = "<<y<<endl;
		}
};



int main()
{
	
	test obj;
	obj.getdata();
	obj.showdata();
	
	return 0;

}

