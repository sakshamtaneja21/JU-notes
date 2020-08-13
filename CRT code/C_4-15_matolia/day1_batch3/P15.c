#include<stdio.h>
int main()
{
	int x = 10;
	printf("Local Variable=%d Address=%u\n", x);
	{
		int x = 20;
		x++;
		printf("In Block=%d Address=%u\n", x);
	}
	x++;
	printf("Local Variable=%d\n", x);
}
