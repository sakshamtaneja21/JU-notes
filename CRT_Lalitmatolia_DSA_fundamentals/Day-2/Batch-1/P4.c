#include<stdio.h>
int main()
{
	int a[3][3]={10, 20, 30, 40, 50, 60, 70, 80, 90};
	printf("a=%u\n",a);  // 536
	printf("a+1=%u\n",a+1); // 548
	printf("&a+1=%u\n",&a+1); // 572
	printf("*a+1=%u\n",*a+1); // 540
	printf("*a+2=%u\n",*a+2); // 544
	printf("a[1]+0=%u\n", a[1]+0);
	printf("a[1]+1=%u\n", a[1]+1);
	printf("a[1]+2=%u\n", a[1]+2);
	printf("*a+3=%u\n", *a+3);
	printf("**a=%u\n", **a);
	printf("a+3=%u\n", a+3);
	return 0;
}
/*
a = Base Address of 2-D Array
a + 1 = Address of next row's first element
&a + 1 = It will print the address beyond the array size
a[0][0] a[0][1] a[0][2]  a[1][0]  a[1][1] a[1][2]  a[2][0]  a[2][1]  a[2][2]
10      20      30       40       50      60       70       80       90  
536	    540	    544	     548	  552	  556	   560	    564	     568	572

a = Base Address of 2-D Array (Row)
*a = Base Address of 1-D Array in 2-D (Column)
**a = Value at Base Address of 1-D Array in 2-D (Value)
*/
