#include<iostream>
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<"I am in Sample Constructor"<<endl;
		}
		void display()
		{
			cout<<"I am in Display"<<endl;
		}
		~Sample()
		{
			cout<<"I am in Sample Destructor"<<endl;
		}
};
int main()
{
	Sample o1, o2, o3, o4;
	return 0;
}
