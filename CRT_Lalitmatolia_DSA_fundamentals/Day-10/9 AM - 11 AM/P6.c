//Selection Sorting
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
	
	//Selection Sorting
	for(i=0; i<size; i++)
	{
		for(j=i; j<size; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
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
