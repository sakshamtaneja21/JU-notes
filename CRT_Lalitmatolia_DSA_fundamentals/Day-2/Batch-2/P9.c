#include<stdio.h>
int main()
{
	int a[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	printf("%u\n", a);
	printf("%u\n", &a);
	// Row Size X Column Size = Matrix Representation
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("a[%d][%d] = %d Address=%u\n",i, j, a[i][j], &a[i][j]);
		}
	}
	return 0;
}
/*
i = 0; 0 < 3;
	j = 0; 0 < 3
		a[0][0] = 10 Address = 6487536 
	j = 1; 1 < 3
		a[0][1] = 20 Address = 6487540
	j = 2; 2 < 3
		a[0][2] = 30 Address =  6487544
	j = 3; 3 < 3; x
i = 1; 1 < 3;
	j = 0; 0 < 3;
		a[1][0] = 40 Address = 6487548
	j = 1; 1 < 3
		a[1][1] = 50 Address = 6487552
	j = 2; 2 < 3;
		a[1][2] = 60 Address = 6487556
	j = 3; 3 < 3; x
i = 2; 2 < 3
	j = 0; 0 < 3
		a[2][0] = 70 Address = 6487560
	j = 1; 1 < 3
		a[2][1] = 80 Address = 6487564
	j = 2; 2 < 3
		a[2][2] = 90 Address = 6487568
	j = 3; 3 < 3 x
i = 3; 3 < 3 x

*/
// Base Address = 6487536
/*
a[0][0]	a[0][1] a[0][2] a[1][0] a[1][1] a[1][2] a[2][0] a[2][1] a[2][2]
10		20		30		40		50		60		70		80		90
536		540		544		548		552		556		560		564		568
*/
