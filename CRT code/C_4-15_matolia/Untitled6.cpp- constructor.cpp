#include<iostream>
using namespace std;


class rectangle
{
	
	private:
	    float length, width, height;\
	public:
		rectangle(float l, float w, float h);
		void area();
		void volume();

};

rectangle::rectangle(float l, float w, float h)
{
	
	cout<<"I am a constructor"<<endl;
	length =l;
	width = w;
	height - h;
}

void rectangle::area()
{
	
	float area = length * width;
	cout<<"area= "<<area<<endl;
}
void rectangle::volume()
{
	float vol = length * width * height;
	cout<<"volume is "<<vol<<endl;
}

int main()
{
	float a, b, c;
	cout<<"enter l, w, h"<<endl;
	cin >>a>>b>>c;
	rectangle rect(a, b, c);
	rect.area();
	rect.volume();
	return 0;
}


