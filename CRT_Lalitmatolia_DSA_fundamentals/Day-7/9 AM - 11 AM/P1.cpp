#include<iostream>
using namespace std;
class Sample
{
	private:
		int x, y, z; // data members of the class
	public:
		void getdata(); // method of the class
		void showdata();
};
// ReturnType ClassName :: MethodName(Arguments){}
void Sample :: getdata()
{
	cout<<"Enter any three number:";
	cin>>x>>y>>z;
}
void Sample :: showdata()
{
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
	cout<<"Z="<<z<<endl;
}
int main()
{
	Sample o1, o2, o3;
	o1.getdata();
	o2.getdata();
	o3.getdata();
	
	o2.showdata();
	o1.showdata();
	o3.showdata();
	cout<<"Sizeof(o1)="<<sizeof(o1)<<endl;
	cout<<"Sizeof(o2)="<<sizeof(o2)<<endl;
	cout<<"Sizeof(o3)="<<sizeof(o3)<<endl;
	return 0;
}
