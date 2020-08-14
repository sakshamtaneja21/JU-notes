#include<stdio.h>
int main()
{
	char a[5][5]={
					"Python",
					"Java",
					"Ruby",
					"BootStrap",
					"J2EE"
				};
	char *p[5] = {
					"Python",
					"Java",
					"Ruby",
					"BootStrap",
					"J2EE"
	};
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(p));
}
