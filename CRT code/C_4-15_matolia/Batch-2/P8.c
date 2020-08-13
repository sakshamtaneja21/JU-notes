//Arrays: It is the collection of similar types of elements
/*
	int a[5]={10, 20, 30, 40, 50};
	
	a[0]	a[1]	a[2]	a[3]	a[4]
	10		20		30		40		50
	1000	1004	1008	1012	1016	1020	1024	1028	1032	1036
*/
#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int i, sum=0;
	for(i=0; i<5; i++)
	{
		sum = sum + a[i];
		printf("a[%d] = %d Address=%u\n",i, a[i], &a[i]);
	}
	printf("Sum of Array=%d", sum);
	return 0;
}
/*
i = 0; 0 < 5;
a[0] = 10  Address = 6487552
i = 1; 1 < 5;
a[1] = 20 Address = 6487556
i = 2; 2 < 5;
a[2] = 30 Address = 6487560
i = 3; 3 < 5;
a[3] = 40 Address = 6487564
i = 4; 4 < 5;
a[4] = 50 Address = 6487568
i = 5; 5 < 5; x
*/

