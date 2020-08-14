#include<stdio.h>
#include<string.h>

int main()
{
	char ch[10]="Hello";
	char ch1[]="Rajasthan";
	char *p = "JECRCJU";
	
	printf("%d\n",sizeof(ch[0])); // 1
	printf("%d\n",sizeof(ch)); // 10
	
	printf("%d\n", sizeof(ch1)); // 10
	printf("%d\n", strlen(ch1));
	
	// sizeof(str) = strlen(str) + 1
	printf("%d\n", sizeof(p)); // 8
	printf("%d\n", sizeof(*p)); // 1
	printf("%c\n", *p); // J
	return 0;
}
