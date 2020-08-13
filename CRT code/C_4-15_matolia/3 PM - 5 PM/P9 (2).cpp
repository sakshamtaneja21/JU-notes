#include<iostream>
using namespace std;
#define SQR(x) x * x
int main()
{
	float a = 6.7, b = 3.2, res;
	res = SQR(a + b);
	cout<<res<<endl;
	return 0;
}
/*
res = 6.7 + 3.2 * 6.7 + 3.2
res = 31.34
*/

