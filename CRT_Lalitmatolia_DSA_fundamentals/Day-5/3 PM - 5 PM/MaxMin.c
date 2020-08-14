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