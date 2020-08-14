// Virtual Function
#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void InterestCalc()
		{
		}
};
class SBI : public Base
{
	public:
		void InterestCalc()
		{
			int p = 10000, r = 2, t = 2;
			double si;
			si = p*r*t/100;
			cout<<"Simple Interest="<<si<<endl;
		}	
};
class PNB : public Base
{
	public:
		void InterestCalc()
		{
			int p = 10000, r = 4, t = 2;
			double si;
			si = p*r*t/100;
			cout<<"Simple Interest="<<si<<endl;
		}	
};
class KM :public Base
{
	public:
		void InterestCalc()
		{
			int p = 10000, r = 5, t = 2;
			double si;
			si = p*r*t/100;
			cout<<"Simple Interest="<<si<<endl;
		}	
};
int main()
{
	Base *p, b;
	
	SBI d1;
	PNB d2;
	KM d3;
	
	p = &b;
	p->InterestCalc();
	
	p = &d1;
	p->InterestCalc();
	
	p = &d2;
	p->InterestCalc();
	
	p = &d3;
	p->InterestCalc();
	
	return 0;
}
