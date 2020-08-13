#include<iostream>
using namespace std;

class sample
{
	public:
		sample()
		{
			cout<<"i am a sample cunscrtuctor"<<endl;
		}
		~sample()
		{
			cout<<"i am a sample destuctor"<<endl;
		}
		
};

int main()
{
	sample obj;
	{
		sample ob;
	}
	return 0;
}
