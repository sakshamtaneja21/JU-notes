#include<stdio.h>
int main()
{
	char *b = "hellofffffff";
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(*b));
	printf("%d\n", strlen(b)+1);
	
	//sizeof(s) = strlen(s) + 1
	// strlen(s) = sizeof(s) - 1
	return 0;
}
