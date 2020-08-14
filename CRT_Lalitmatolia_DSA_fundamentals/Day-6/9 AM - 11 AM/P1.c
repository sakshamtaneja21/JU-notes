#include<stdio.h>
int main()
{
	char p[]="%d\n";
	p[1]=99;
	printf(p,99); // printf("%c\n", 65);
	return 0;
}
