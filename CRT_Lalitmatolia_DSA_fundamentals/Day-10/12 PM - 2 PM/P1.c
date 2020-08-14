//Insertion Sorting
#include<stdio.h>
int main()
{
	int size;
	printf("Enter size for array");
	scanf("%d",&size);
	
	int a[size], i, j, key;
	
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
	
	//Insertion Sorting
	for(i=1; i<size; i++)
	{
		key = a[i];
		j = i - 1;
		
		while(j>=0 && a[j] > key)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
	}
	
	printf("\nElements of Sorted Array\n");
	for(i=0; i<size; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
