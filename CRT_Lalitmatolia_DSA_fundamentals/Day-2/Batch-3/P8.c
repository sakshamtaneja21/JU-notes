#include<stdio.h>
int main()
{
	int a[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	int i, j;
	printf("%u\n", a); // Base Address of 2-D Array (6487536)
	// RowSize x ColumnSize = Matrix Form = Tabular Representation
	/*
	int a[3][3] = {
					{10, 20, 30},
					{40, 50, 60},
					{70, 80, 90}
				  };
	*/
	/*
	a[0][0]	a[0][1]	a[0][2] a[1][0]	a[1][1]	a[1][2]	a[2][0]	a[2][1]	a[2][2]
	10		20		30		40		50		60		70		80		90
	536		540		544		548		552		556		560		564		6487568
	*/
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("a[%d][%d] = %d Address=%u\n",i,j,a[i][j], &a[i][j]);
		}
	}
	printf("\n2-D Array in Matrix Form\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
i = 0; 0<3
	j=0; 0<3	a[0][0] = 10
	j=1; 1<3	a[0][1] = 20
	j=2; 2<3	a[0][2] = 30
	j=3; 3<3	x
i = 1; 1<3
	j=0; 0<3	a[1][0] = 40
	j=1; 1<3	a[1][1] = 50
	j=2; 2<3	a[1][2] = 60
	j=3; 3<3	x
i = 2; 2<3
	j=0; 0<3	a[2][0] = 70
	j=1; 1<3	a[2][1] = 80
	j=2; 2<3	a[2][2] = 90
	j=3; 3<3	x
i = 3; 3<3		x
*/

