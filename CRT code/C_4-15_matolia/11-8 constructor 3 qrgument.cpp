// constructor with default argument

#include<iostream>
using namespace std;

class sample
{
	
	private:
		int num1, num2, num3;
	public:
		sample(int=0, int =0, int=0);
		void sum();
		void display();
		
};
sample :: sample(int n1, int n2, int n3)
{
	num1 = n1;
	num2 = n3;
	num3 = n3;
}

void sample::sum()
{
	int sum = num1 + num2 + num3;
	cout<<"sum is "<<sum<<endl;

}
void sample::display()
{
	cout<<"Num1 is "<<num1<<endl;
	cout<<"Num2 is "<<num3<<endl;
	cout<<"Num3 is "<<num3<<endl;
}

int main()
{
	sample s1, s2(10,20), s3(10, 20, 30);
	s1.sum();
	s2.sum();
	s3.sum();
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
