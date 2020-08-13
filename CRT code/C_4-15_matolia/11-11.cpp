
#include<iostream>
using namespace std;

class counter
{
	private:
		int count; //data member
	public:
		counter()
		{
			count = 0;
		}
		counter(int c)
		{
			count = c;
		}
		int getvalue()
		{
			return(count);//method with return type
		}
		counter operator++()
		{
			return(counter(++count));
		}
		counter operator++(int)
		{
			return(counter(++count));
		}
		

};

int main()
{
	
	counter c1, c2(10);
	
	cout<<"default value for c1 = "<<c1.getvalue()<<endl;
	cout<<"default value for c2 = "<<c2.getvalue()<<endl;
	++c1;
	cout<<"after incriment  c1 = "<<c1.getvalue()<<endl;
	++c2;
	cout<<"after incriment for c2 = "<<c2.getvalue()<<endl;
	c1++;
	cout<<"after incriment  c1 = "<<c1.getvalue()<<endl;
	c2++;
	cout<<"after incriment for c2 = "<<c2.getvalue()<<endl;
	return 0;
	

}

