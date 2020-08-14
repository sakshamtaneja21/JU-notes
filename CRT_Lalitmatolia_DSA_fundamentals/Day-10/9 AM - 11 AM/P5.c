//Bubble Sorting
#include<stdio.h>
int main()
{
	int size;
	printf("Enter size for array");
	scanf("%d",&size);
	
	int a[size], i, j, temp;
	
	for(i=0; i<size; i++)
	{
		printf("Enter %d Element", i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nElements of Unsorted Array\n");
	for(i=0; i<size; i++)
	{
		printf("%d\t", a[i]);
	}
	
	//Bubble Sorting
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("\nElements of Sorted Array\n");
	for(i=0; i<size; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
