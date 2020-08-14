#include<stdio.h>
int main()
{
	int a = 1;
	switch(a)
	{
		case 1:
			printf("Hello");
		case 2:
			printf("Bye\n");
		case 3:
			printf("Hi\n");
		default:
			printf("Invalid\n");
	}
}
