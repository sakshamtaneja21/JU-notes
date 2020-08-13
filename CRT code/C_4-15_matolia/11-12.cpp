#include<iostream>
using namespace std;

class binary
{
	private:
		int x, y, z; 
	public:
		Binary()
		{
			x = y= z = 0;
		}
		binary(int x, int y , int z)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		binary operator+(binary ob)
		{
			
			binary temp;
			temp.x = x + ob.x;
			temp.y = y + ob.y;
			temp.z = z + ob.z;
			return temp;
			
		}
		binary operator - (binary ob);
		void display();
};
binary binary :: operator-(binary ob)
		{

			binary temp;
			temp.x = x - ob.x;
			temp.y = y - ob.y;
			temp.z = z - ob.z;
			return temp;

		}
void binary :: display()
{
	cout<<"value of x = "<<x<<endl;
	cout<<"value of y = "<<y<<endl;
	cout<<"value of z = "<<z<<endl;
	cout<<endl;
}

int main()
{
	
	binary b1(10, 20, 30), b2(100,200,300), b3, b4;
	
	b1.display();
	b2.display();
	
	b3 = b1 + b2;
	b3.display();
	
	b4 = b1 - b2;
	b4.display();
	
	return 0;
}
