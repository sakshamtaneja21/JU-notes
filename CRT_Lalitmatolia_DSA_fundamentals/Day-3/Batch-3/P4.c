#include<stdio.h>
#include<string.h>

int main()
{
	int a[10];
	int b[2][3];
	char ch[] = "Hello";
	char *p = "Hello";
	
	printf("%d\n", sizeof(int)); // 4
	printf("%d\n", sizeof(char)); // 1
	printf("%d\n", sizeof(float)); // 4
	
	printf("%u\n", sizeof(a[0])); // 4
	printf("%u\n", sizeof(a)); // 40
	
	printf("%u\n", sizeof(b));
	
	printf("%u\n", sizeof(ch));
	printf("%u\n", strlen(ch));
	
	// sizeof(str) = strlen(str) + 1;
	printf("%u\n", sizeof(p)); // 8
	printf("%u\n", sizeof(*p)); // 1
	printf("%c\n", *p);
	return 0;
}
