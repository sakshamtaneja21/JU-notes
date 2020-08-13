#include<iostream>
using namespace std;


class rectangle
{
	
	private:
		float length, breadth;
	public:
		rectangle()
		{
			cout<<"I am constructor"<<endl;
			length = 10.0;
			breadth = 25.0;
		}
		
		float area()
		{
			return(length*breadth);
		}
};


int main()
{
	
	rectangle rect;
	cout<<"area ="<<rect.area()<<endl;
	return 0;
}
