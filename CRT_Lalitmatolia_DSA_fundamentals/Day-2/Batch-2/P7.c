#include<stdio.h>
int main()
{
	int i, j;
	for(i=1; i<=2; ++i)
	{
		for(j=1; j<=2; ++j)
		{
			printf("%d %d\n", i, j);
		}
	}
}
/*
i = 1; 1 <= 2
	j = 1; 1 <= 2   (1 1)
    j = 2; 2 <= 2   (1 2)
    j = 3; 3 <= 2	X
i = 2; 2 <= 2
	j = 1; 1 <= 2	(2 1)
	j = 2; 2 <= 2   (2 2)
	j = 3; 3 <= 2   X
i = 3; 3 <= 2   X
*/

/*
	1	1
	1   2
	2   1
	2   2
*/