#include<stdio.h>
int main()
{
	int x, y;
	//Outer Loop
	for(x=1; x<=2; x++)
	{
		//Inner Loop
		for(y=1; y<=2; y++)
		{
			printf("%d %d\n", x, y);
		}
	}
	return 0;
}
/*
x = 1; 1 <= 2;
	y = 1; 1 <= 2		(1 1)
	y = 2; 2 <= 2		(1 2)
	y = 3; 3 <= 2		x
x = 2; 2 <= 2;
	y = 1; 1 <= 2		(2 1)
	y = 2; 2 <= 2		(2 2)
	y = 3; 3 <= 2		x
x = 3; 3 <= 2;			x
*/
/*
1  1
1  2
2  1
2  2
*/
