#include<stdio.h>
int main()
{
	char ch = 'A';
	printf("%d\n", sizeof(ch));
	printf("%d\n",sizeof(sizeof('A')));
	printf("%d\n",sizeof('A'));
	printf("%d\n",sizeof(65));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long long int));
	return 0;
}
