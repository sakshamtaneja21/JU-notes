// Virtual Function
#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void vfunc()
		{
			cout<<"This is base's vfunc()"<<endl;
		}
};
class Derived1 : public Base
{
	public:
		void vfunc()
		{
			cout<<"This is derived1's vfunc()"<<endl;
		}	
};
class Derived2 : public Base
{
	public:
		void vfunc()
		{
			cout<<"This is derived2's vfunc()"<<endl;
		}
};
class Derived3 :public Base
{
	public:
		void vfunc()
		{
			cout<<"This is derived3's vfunc()"<<endl;
		}
};
int main()
{
	Base *p, b;
	
	Derived1 d1;
	Derived2 d2;
	Derived3 d3;
	
	p = &b;
	p->vfunc();
	
	p = &d1;
	p->vfunc();
	
	p = &d2;
	p->vfunc();
	
	p = &d3;
	p->vfunc();
	
	return 0;
}
