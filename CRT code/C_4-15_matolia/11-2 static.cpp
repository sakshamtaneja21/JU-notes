#include<iostream>
using namespace std;

class student
{
	
	static int count;
	public:
		static void showcount(void)
		{
			cout<<"count = "<<count<<endl;

		}
};
int student :: count = 100;

int main()
{
	student :: showcount();
	return 0;
	
}




/*
static data members
-----------------------
store value common to whole class
can be used withen class
lifetie whole program
single copy
for making data member startic we requre
declare in class
define outside class

*/
