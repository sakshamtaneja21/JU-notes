#include<stdio.h>
int main()
{
	int a[3][3]={10, 20, 30, 40, 50, 60, 70, 80, 90};
	int i, j;
	printf("%u\n", a); //Base Address of 2-D Array
	// RowSize x ColumnSize = Matrix
	/*
	int a[3][3] = {
					{10, 20, 30},
					{40, 50, 60},
					{70, 80, 90}
			      };
	*/
	/*
	a[0][0]		a[0][1]		a[0][2]		a[1][0]		a[1][1]		a[1][2]  a[2][0]	a[2][1]		a[2][2]
	10			20			30			40			50			60		 70			80			90
	6487536		6487540		6487544		6487548		6487552		6487556	6487560		6487564		6487568
	*/
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("a[%d][%d] = %d Address=%u\n", i, j, a[i][j], &a[i][j]);
		}
	}
	printf("2-D Array in Matrix Form\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("%u", printf);
	return 0;
}
