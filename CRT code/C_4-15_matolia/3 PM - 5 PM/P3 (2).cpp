#include<iostream>
using namespace std;

class Binary
{
	private:
		int x, y, z;
	public:
		Binary()
		{
			x = y = z = 0;
		}
		Binary(int x, int y, int z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}
		Binary operator+(Binary ob) // Binary + operator overloading
		{
			Binary temp;
			temp.x = x + ob.x; // temp.x = 10 + 100 = 110
			temp.y = y + ob.y; // temp.y = 20 + 200 = 220
			temp.z = z + ob.z; // temp.z = 30 + 300 = 330
			return temp;
		}
		Binary operator-(Binary ob); // Binary - operator overloading
		void display();
};

Binary Binary :: operator-(Binary ob)
{
	Binary temp;
	temp.x = x - ob.x; // temp.x = 10 - 100 = -90
	temp.y = y - ob.y; // temp.y = 20 - 200 = -180
	temp.z = z - ob.z; // temp.z = 30 - 300 = -270
	return temp;
}

void Binary :: display()
{
	cout<<"Value of X="<<x<<endl;
	cout<<"Value of Y="<<y<<endl;
	cout<<"Value of Z="<<z<<endl;
	cout<<endl;
}

int main()
{
	int a = 10, b = 20, c;
	c = a + b;
	cout<<"Value of C="<<c<<endl;
	
	Binary b1(10, 20, 30), b2(100, 200, 300), b3, b4;
	
	b1.display();
	b2.display();
	
	// b3 = b1.operator+(b2);
	b3 = b1 + b2; // To call the binary + operator overloading
	b3.display();
	
	// b4 = b1.operator-(b2);
	b4 = b1 - b2;
	b4.display();
	
	return 0;
}

