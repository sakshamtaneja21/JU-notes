#include<iostream>
using namespace std;
class number
{
	protected:
		int val;
	public:
		void setval(int i)
		{
			val = i;
		}
		virtual void show()=0; // pure virtual function
};
class hextype : public number
{
	public:
		void show()
		{
			cout<<"Hexadecimal Value=";
			cout<<hex<<val<<endl;
		}
};
class octtype : public number
{
	public:
		void show()
		{
			cout<<"Octal Value=";
			cout<<oct<<val<<endl;
		}
};
int main()
{
	hextype h;
	octtype d;
	h.setval(20);
	h.show();
	d.setval(20);
	d.show();
	return 0;
}
