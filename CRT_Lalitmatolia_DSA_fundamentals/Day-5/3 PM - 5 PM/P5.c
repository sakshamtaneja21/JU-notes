// WAP to print the maximum and minimum from the unsorted array
#include<stdio.h>
int main()
{
	int a[5], i, max, min;
	printf("Enter any ten numbers:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	max = min = a[0];
	for(i=0; i<5; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
		if(min > a[i])
		{
			min = a[i];
		}
	}
	printf("Maximum=%d\n", max);
	printf("Minimum=%d\n", min);
	return 0;
}
/*
a[0]	a[1]	a[2]	a[3]	a[4]
50		10		40		30		20
max = a[0] = 50
min = a[0] = 50
Step-1 (i=0)
50 < 50
50 > 50

Step-2 (i=1)
50 < 10	X
50 > 10
	min = 10
	
Step-3 (i=2)
	50 < 40
	10 > 40

Step-4 (i=3) 
	50 < 30
	10 > 30
Step-5 (i=4)
	50 < 20
	10 > 20
Step-6
	
*/

