//Binary Search
#include<stdio.h>
int BinarySearch(int[], int, int); //Prototype Declaration for Binary Search
int main()
{
	int a[10], n = 10, i, num, pos;
	
	//To take inputs from the user
	for(i=0; i<10; i++)
	{
		printf("Enter %d Number",i+1);
		scanf("%d",&a[i]);
	}
	
	//To print the elements of the array
	printf("\nElements of an Array\n");
	for(i=0; i<10; i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nEnter any number to search");
	scanf("%d",&num);
	
	pos = BinarySearch(a, n, num);
	
	if(pos==-1)
		printf("Element Not Found");
	else
		printf("Element Found at Location %d", pos+1);
	return 0;
}
int BinarySearch(int a[], int n, int num)
{
	int beg=0, end=n-1, mid;
	mid = (beg+end)/2;
	while((beg<=end) && a[mid]!=num)
	{
		if(num<a[mid])
			end = mid - 1;
		else
			beg = mid + 1;
		mid = (beg+end)/2;
	}
	if(beg>end)
		return -1;
	else
		return mid;
}
