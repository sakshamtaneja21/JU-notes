#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	printf("a=%u\n",a);  // 6487552
	printf("&a=%u\n",&a); // 6487552
	printf("a+1=%u\n",a+1); //6487556
	printf("&a[1]=%u\n",&a[1]); // 6487556
	printf("&a+1=%u\n",&a+1); //6487572
	printf("&a+2=%u\n",&a+2); //6487592
	printf("&a+3=%u\n",&a+3); // 6487612
	return 0;
}
/*
If you write the name of the array, then its the base address of
an array. (starting address of an array)
a[0]	a[1]	a[2]	a[3]	a[4]
10		20		30		40		50
6487552	6487556	6487560	6487564	6487568	6487572  576 580 584 588 592

a = Base Address of 1-D Array
a + 1 = Address of next Element in 1-D Array
*/
