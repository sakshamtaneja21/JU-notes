#include<iostream>
using namespace std;
int main()
{
	int a[5]={10, 20, 30, 40, 50}, i;
	int *p=a;
	for(i=0; i<5; i++)
	{
		cout<<*p++<<endl;
		
	}
	p=a;
	cout<<"Array Traversing using while loop"<<endl;
	while(*p<=50)
	{
		if(*p==0)
		break;
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
/*
a[0]	a[1]	a[2]	a[3]	a[4]
10		20		30		40		50
1000	1002	1004	1006	1008

a++ = > 1000++ => 1000 = 1000 + 1 => 1000 = 1002
*/
