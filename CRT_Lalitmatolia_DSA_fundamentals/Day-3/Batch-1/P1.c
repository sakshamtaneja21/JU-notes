#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter any two numbers:");
	scanf("%d%d",&x,&y);
	
	printf("Before Swapping X=%d Y=%d\n", x, y);
	//Logic for swapping
/*	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	
	*/
	x ^= y ^=x ^= y;
	printf("After Swapping X=%d Y=%d\n", x, y);
	return 0;
}
