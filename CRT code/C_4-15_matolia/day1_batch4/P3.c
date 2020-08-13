#include<stdio.h>
int  main()
{
	int a = 4, b = 3;
	float f;
	f = (float)a / b;  // f = (float)a / b; f = a / (float)b; f = (float)a/(float)b;
	printf("%f\n", f); // 1.000000
	printf("%.2f", f); // 1.00
	return 0;
}
/*
Division Rule:
int / int = int
int / float = float
float / int = float
float / float = float

int / int = int
int / double = double
double / int = double
double / double = double
*/
