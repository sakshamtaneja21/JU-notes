#include<stdio.h>
int main()
{
	char ch = 0;
	int i;
	for(i=0; i<127; i++)
	{
		printf("%d = %c\t", i, i);
	}
	return 0;
}
