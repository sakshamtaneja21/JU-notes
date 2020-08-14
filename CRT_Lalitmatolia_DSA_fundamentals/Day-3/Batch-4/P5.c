#include<stdio.h>
int main()
{
	int a[2][2]={10, 20, 30, 40};
	printf("%u\n", a);
	printf("%u\n", a+1);
	printf("%u\n", *a + 1);
	printf("%u\n", *a + 2);
	printf("%u\n", **a);
	
	printf("%u\n", a[1]+1);
	
	/*
	a[1] + 1 => *(a+1) + 1 => *(568 + 1) + 1 => *(576) + 1
		=> *(576) + 1 => 576 + 1 = 580
	
	*/
	return 0;
}
