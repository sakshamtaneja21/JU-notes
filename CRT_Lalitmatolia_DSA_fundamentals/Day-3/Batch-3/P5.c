#include<stdio.h>
int main()
{
	char ch[]="Hello";
	char *p = ch;
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
	return 0;
}
