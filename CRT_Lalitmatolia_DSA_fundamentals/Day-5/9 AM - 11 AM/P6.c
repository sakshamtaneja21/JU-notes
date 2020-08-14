#include<stdio.h>
int main()
{
	int a = -1;
	switch(a)
	{
		case -1:
			printf("ME");
		case 1:
			printf("JECRC\n");
		case 1+1:
			printf("JU\n");
		case 1+2:
			printf("ECE\n");
		default:
			printf("CSE\n");
	}
}
