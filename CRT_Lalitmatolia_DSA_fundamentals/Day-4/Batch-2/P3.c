#include<stdio.h>
int main()
{
	char s[5][100] = {
		"Java",
		"Python",
		"BootStrap",
		"Flutter",
		"Ruby"
	};
	
	char *p[5]={
		"Java",
		"Python",
		"BootStrap",
		"Flutter",
		"Ruby"
	};
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(p));
}
