#include<stdio.h>
int fact(int); // Function Prototype
int main()
{
	int n, f;
	printf("Enter any number");
	scanf("%d", &n);
	f = fact(n);
	printf("Factorial=%d", f);
	return 0;
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n * fact(n-1);
}
