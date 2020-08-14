#include<stdio.h>
int main()
{
	int a[10];
	printf("%d\n",sizeof(a[0]));
	printf("%d\n", sizeof(a));
	
	printf("%d\n", sizeof(int)); // 4
	printf("%d\n", sizeof(char)); // 1
	printf("%d\n", sizeof(float)); // 4
	printf("%d\n", sizeof(double)); // 8
	printf("%d\n", sizeof(long double)); // 16
	return 0;
}
