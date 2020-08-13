#include<iostream>
using namespace std;
class test
{
	private:
		int a,b,c;
	public:
		void fuc(int a, int b, int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			cout<<a+b+c<<endl;
		}
		void fuc(float a,float b, float c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			cout<<a+b+c<<endl;
		}
};
int main()
{
	test a;
	a.fuc(12,20,30);
	test b;
	b.fuc(1.5f,1.5f,1.5f);
	return 0;
}

