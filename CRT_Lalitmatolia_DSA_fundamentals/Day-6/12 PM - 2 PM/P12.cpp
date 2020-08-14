#include<iostream>
using namespace std;
float round(float var)
{
	float val = (int)(var*100+0.5);
	return (float)val/100;
}
int main()
{
	float var = 37.666666;
	cout<<round(var);
}
