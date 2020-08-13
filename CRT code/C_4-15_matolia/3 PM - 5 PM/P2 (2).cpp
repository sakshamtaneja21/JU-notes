#include<iostream>
using namespace std;

class Counter
{
	private:
		int count;	// private data member of Counter class
	public:
		Counter() // Default Constructor
		{
			count = 0;
		}
		Counter(int c) // One Argumented Constructor
		{
			count = c;
		}
		int getvalue() // Method with int return type
		{
			return(count);
		}
		Counter operator++() // opeator overloading inside class (Prefix)
		{
			return(Counter(++count));
		}
		Counter operator++(int) // Postfix
		{
			return(Counter(count++));
		}
};
int main()
{
	Counter c1, c2(10);
	cout<<"Default Value: c1="<<c1.getvalue()<<endl;
	cout<<"Defalut Value: c2="<<c2.getvalue()<<endl;
	++c1; // To call the operator overloading
	cout<<"After Increment: c1="<<c1.getvalue()<<endl;
	++c2; // To call the operator overloading
	cout<<"After Increment: c2="<<c2.getvalue()<<endl;
	c1++;
	cout<<"After Increment: c1="<<c1.getvalue()<<endl;
	c2++;
	cout<<"After Increment: c2="<<c2.getvalue()<<endl;
	return 0;
}

