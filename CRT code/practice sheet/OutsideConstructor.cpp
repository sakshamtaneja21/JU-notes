#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float length, width, height;
	public:
		Rectangle();
		Rectangle(float l, float w, float h);
		void area();
		void volumn();	
};
Rectangle::Rectangle()
{
	cout<<"In Default Constructor"<<endl;
	length = 0;
	width = 0;
	height = 0;
}
//classname::constructorName(){}
Rectangle::Rectangle(float l, float w, float h)
{
	cout<<"I am in constructor"<<endl;
	length = l;
	width = w;
	height = h;
}

//ReturnType ClassName :: MethodName(Arguments){}
void Rectangle :: area()
{
	float area = length * width;
	cout<<"Area="<<area<<endl;
}

void Rectangle :: volumn()
{
	float vol = length * width * height;
	cout<<"Volume="<<vol<<endl;
}

int main()
{
	float a, b, c;
	cout<<"Enter any Length, Width and Height"<<endl;
	cin>>a>>b>>c;
	Rectangle r;
	r.area();
	r.volumn();
	Rectangle rect(a, b, c);
	rect.area();
	rect.volumn();
	return 0;
}
