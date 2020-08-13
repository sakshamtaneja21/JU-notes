#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter any Number:");
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		arr[i] = 0; // int fflush(FILE *stream);
	}
	for(i=0; i<n; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
