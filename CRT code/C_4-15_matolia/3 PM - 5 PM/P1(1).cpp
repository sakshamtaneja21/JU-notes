#include<iostream>
using namespace std;
class Pyramid
{
	int line;
	public:
		void PrintMe(int);
};
void Pyramid :: PrintMe(int line)
{
	int r, c, s, t;
	char ch;
	t = line;
	for(r=1; r<=line; r++)
	{
		ch='A';
		for(c=1; c<=r; c++)
		{
			cout<<ch;
			ch++;
		}
		for(s=1; s<=t*2-2; s++)
			cout<<"-";
		ch--;
		for(c=c-2; c>=0; c--)
		{
			cout<<ch;
			ch--;
		}
		t--;
		cout<<endl;
	}
	t = 1;
	for(r=line-1; r>=1; r--)
	{
		ch='A';
		for(c=1; c<=r; c++)
		{
			cout<<ch;
			ch++;
		}
		for(s=1; s<=t*2; s++)
			cout<<"-";
		ch--;
		for(c=c-2; c>=0; c--)
		{
			cout<<ch;
			ch--;
		}
		t++;
		cout<<endl;
	}
}
int main()
{
	int line;
	Pyramid obj;
	cout<<"Enter Line Number:";
	cin>>line;
	obj.PrintMe(line);
	return 0;
}
