#include<stdio.h>
int main()
{
	func();
	func();
	func();
}
int func()
{
	static int x=10;
	x++;
	printf("X=%d\n", x);
}
