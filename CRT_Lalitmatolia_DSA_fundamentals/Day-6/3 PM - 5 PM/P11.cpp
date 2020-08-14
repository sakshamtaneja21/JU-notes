#include<iostream>
using namespace std;
struct Stud
{
	int a;
};
class Test
{
	public:
	int a;
};
int main()
{
	struct Stud o;
	Test obj;
	obj.a = 100;
	o.a = 200;
	cout<<o.a<<endl;
	cout<<obj.a<<endl;
	cout<<sizeof(o)<<endl;
	cout<<sizeof(obj)<<endl;
	return 0;
}

/*
private, public, protected
*/
