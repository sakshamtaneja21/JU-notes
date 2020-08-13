#include<iostream>
using namespace std;
class ONE
{
	private:
		int a, b, c;
	public:
		void enter(void)
		{
			cout<<"Enter any three numbers";
			cin>>a>>b>>c;
		}
		friend int largest(ONE ob); // friend declaration
};
int largest(ONE ob)
{
	int max;
	max = ob.a;
	if(ob.b>max)
	max = ob.b;
	if(ob.c>max)
	max = ob.c;
	return(max);
}
int main()
{
	ONE ob;
	int res;
	ob.enter();
	res = largest(ob);
	cout<<"Maximum="<<res<<endl;
	return 0;
}
