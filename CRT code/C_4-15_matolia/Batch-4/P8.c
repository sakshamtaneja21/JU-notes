#include<stdio.h>
int main()
{
	char ch[]="ABC";
	char *p = ch;
	while(*p!='\0')
	{
		printf("%c=%d\n", *p,*p);
		p++;
	}
	printf("ch[3]=%d", ch[3]);
	
	return 0;
}
/*
65 - 90 => A-Z
97 - 122 => a - z
48 - 57 = 0 - 9
*/
