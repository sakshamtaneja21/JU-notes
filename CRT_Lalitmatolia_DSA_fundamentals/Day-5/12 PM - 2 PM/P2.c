#include<stdio.h>
int main(int argc, char *b[])
{
	int a, b, c, sum=0;
	printf("Program Name=%s", argv[0]);
	a = atoi(b[1]);
	b = atoi(b[2]);
	c = atoi(b[3]);
	sum = a + b + c;
	printf("\nSum=%d\n", sum);
	return 0;
}
/*
c:\>P2.exe 10 20 30
argv[0] = P2.exe
argv[1] = 10
argv[2] = 20
argv[3] = 30
atoi() = To convert string into int
itoa() = To convert int into string
*/
