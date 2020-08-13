#include<iostream>
using namespace std;

class Test
{
	public:
		int func(int a)
		{
			if(a==0)
				return 0;
			else
				return a + func(a-1);
		}	
};
int main()
{
	Test obj;
	int res = obj.func(5);
	cout<<"Result="<<res<<endl;
	return 0;
}

/*
func(5) = 5 + func(4) = 5 + 10 = 15
func(4) = 4 + func(3) = 4 + 6 = 10
func(3) = 3 + func(2) = 3 + 3 = 6
func(2) = 2 + func(1) = 2 + 1 = 3
func(1) = 1 + func(0) = 1 + 0 = 1
func(0) = 0

*/
