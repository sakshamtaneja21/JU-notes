#include<stdio.h>
int main()
{
	int count = 11;
	while(--count + 1)
	{
		;
	}
	
	printf("%d",count);
	return 0;
}
/*
count	--count		--count + 1		while(--count+1);
11		10			10 + 1 = 11		while(11);
10		9			9 + 1 = 10		while(10);
9		8			8 + 1 = 9		while(9);
8		7			7 + 1 = 8		while(8);
7		6			6 + 1 = 7		while(7);
6		5			5 + 1 = 6		while(6);
5		4			4 + 1 = 5		while(5);
4		3			3 + 1 = 4		while(4);
3		2			2 + 1 = 3		while(3);
2		1			1 + 1 = 2		while(2);
1		0			0 + 1 = 1		while(1);
0		-1			-1 + 1 = 0		while(0);
-1
Final Answer: -1	
*/
