#include<stdio.h>
int main()
{
	char ch[25]="Sales\0man";
	
	
	printf("%s", "\0");
	printf("\\0");
	printf("\\n");
	printf("\\t");
	return 0;
}
