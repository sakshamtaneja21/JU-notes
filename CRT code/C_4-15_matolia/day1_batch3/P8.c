#include<stdio.h>
int x = 10;
int main()
{
	func();
	func();
	func();
	func();
}
int func()
{
	x++;
	printf("X=%d\n", x);
}
