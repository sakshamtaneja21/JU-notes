#include<iostream>
using namespace std;
class A
{
	int a;
	float f;
	char ch[5];
};
int main()
{
	A obj;
	printf("%d\n", sizeof(obj));
}
