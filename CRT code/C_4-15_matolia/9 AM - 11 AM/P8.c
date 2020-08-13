#include<stdio.h>
int main()
{
	boolean a = true;
	switch(a)
	{
		case true:
			printf("Hello");
		case false:
			printf("Bye");
		default:
			printf("Hi");
	}
}
