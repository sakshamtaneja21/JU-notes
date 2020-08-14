#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="Rajasthan !";
	printf("\n %d",*(s+strlen(s)));
	
	printf("%d\n", strlen("Hello"));
	printf("%d\n", sizeof("Hello"));
	return 0;
}
