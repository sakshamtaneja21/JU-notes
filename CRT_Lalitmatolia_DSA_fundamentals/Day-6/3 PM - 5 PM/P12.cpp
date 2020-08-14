#include<iostream>
using namespace std;
class Test
{
	private:
		int a, b, c;
	public:
		void getdata()
		{
			cout<<"Enter three numbers:"<<endl;
			cin>>a>>b>>c;
		}
		void showdata()
		{
			cout<<"A="<<a<<endl;
			cout<<"B="<<b<<endl;
			cout<<"C="<<c<<endl;
		}
		void mydata(int a, int b, int c)
		{
			(*this).a = a;
			(*this).b = b;
			(*this).c = c;
		}
};
int main()
{
	int a, b, c;
	Test obj;
	obj.getdata();
	obj.showdata();
	cout<<"Enter any three values";
	cin>>a>>b>>c;
	obj.mydata(a, b, c);
	obj.showdata();
	cout<<sizeof(obj)<<endl;
	return 0;
}
