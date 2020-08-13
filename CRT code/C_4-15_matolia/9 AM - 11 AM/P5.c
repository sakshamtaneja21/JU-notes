#include<stdio.h>
int main()
{
	int f = 1;
	switch(f)
	{
		case 1.0:
			printf("Hello");
		case 2.1:
			printf("Hi");
		case 3.2:
			printf("Bye");
		default:
			printf("Go");
	}
}
