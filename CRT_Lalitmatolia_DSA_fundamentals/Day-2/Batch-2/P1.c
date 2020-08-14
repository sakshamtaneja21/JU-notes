#include<stdio.h>
int main()
{
	int count = 11;
	while(--count + 1);
	printf("%d\n", count);
	return 0;
}
/*
count	--count		--count + 1		while(--count+1)
------------------------------------------------------------
11		10			11				while(11);
10		9			10				while(10);
9		8			9				while(9);
8		7			8				while(8);
7		6			7				while(7);
6		5			6				while(6);
5		4			5				while(5);
4		3			4				while(4);
3		2			3				while(3);
2		1			2				while(2);
1		0			1				while(1);
0		-1			0				while(0);
	count = count - 1;
	        0 - 1 = -1
-1
Final Answer: -1
*/
