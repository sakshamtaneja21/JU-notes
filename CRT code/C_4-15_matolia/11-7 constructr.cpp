#include<iostream>
using namespace std;


class sample
{

	private:
	    int x, y , z;
	public:
		sample(int a, int b, int c) // para,etarozed constructor
		{
			x = a;
			y = b;
			z = c;
		}
		
		sample(sample &obj) //copy constructor
		{
			x = obj.x;
			y = obj.y;
			z = obj.z;
		}
		
		void display() // method
		{
			cout<<"value of X ="<<x<<endl;
			cout<<"value of Y ="<<y<<endl;
			cout<<"value of Z ="<<z<<endl;
			cout<<endl;
		}

};

int main()
{
	
	sample  s1(10, 20, 30);
	sample s2(10 ,25, 55);
	sample s3(s1);
	sample s4(s2);
	s1.display();
	s2.display();
	s3.display();
	s3.display();
	return 0;
}
