#include<stdio.h>
int main()
{
	int i;
	for(i=0; i<127; i++)
	{
		printf("%c = %d\t", i, i);
	}
	return 0;
}
