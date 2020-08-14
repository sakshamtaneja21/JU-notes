#include<iostream>
using namespace std;

class TWO; // forward declaration of the class TWO to inform the compiler otherwise an error will be there
class ONE
{
	private:
		int a, b;
	public:
		void enter()
		{
			cout<<"Enter the value of a and b for class ONE";
			cin>>a>>b;	
		}	
		friend int sum(ONE, TWO);
};
class TWO
{
	private:
		int a, b;
	public:
		void enter()
		{
			cout<<"Enter the value of a and b for class TWO";
			cin>>a>>b;	
		}	
		friend int sum(ONE, TWO);
};
int sum(ONE ob1, TWO ob2)
{
	return(ob1.a+ ob1.b+ ob2.a+ ob2.b);
}
int main()
{
	ONE ob1;
	TWO ob2;
	ob1.enter();
	ob2.enter();
	cout<<"Sum of Number="<<sum(ob1, ob2)<<endl;
	return 0;
}




