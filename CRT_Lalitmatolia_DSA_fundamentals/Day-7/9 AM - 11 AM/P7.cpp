#include<iostream>
using namespace std;
class Rectangle
{
	public:
		float length, breadth;
	public:
		Rectangle()
		{
			cout<<"I am in the constructor"<<endl;
			length = 10.0;
			breadth = 20.55;	
		}
		float area()
		{
			return(length*breadth);
		}
};
int main()
{
	Rectangle rect;
	float area = rect.area();
	cout<<"Area="<<area<<endl;
	
	cout<<"Area="<<rect.area()<<endl;
	
	cout<<"Length="<<rect.length<<endl;
	cout<<"Breadth="<<rect.breadth<<endl;
	
	cout<<"Area="<<rect.length * rect.breadth<<endl;
	cout<<"Size of Rect="<<sizeof(rect)<<endl;
	cout<<"Area="<<sizeof(area)<<endl;
	return 0;
}

