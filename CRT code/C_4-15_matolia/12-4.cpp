#include<iostream>
using namespace std;

class A
{
	public:
		int x;
};

class B : A
{
	protected:
		int y;
	public:
		void getxy()
		{
			cout<<"enter value of x and y"<<endl;
			cin>>x>>y;
		}
		
		void showxy()
		{
			cout<<"valud of x "<<x<<endl;
			cout<<"value of y"<<y<<endl;
		}

};
class C : B
{
	protected:
		int z;
	public:
		void getxz()
		{
			cout<<"enter value of x and z"<<endl;
			cin>>x>>z;
		}

		void showxy()
		{
			cout<<"valud of x "<<x<<endl;
			cout<<"value of z"<<z<<endl;
		}

};
clas D : C
{
	protected:
		int w;
	public:
		void getxw()
		{
			cout<<"enter value of x and w"<<endl;
			cin>>x>>w;
		}

		void showxy()
		{
			cout<<"valud of x "<<x<<endl;
			cout<<"value of w"<<w<<endl;
		}


};


int main()
{
	
	B ob;
	
	ob.getxy();
	ob.showxy();
	
	C oc;
	ob.getxz();
	ob.showxw();
	
	D od;
	ob.getxw();
	ob.showxw();
	
	
}
