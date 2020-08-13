#include<stdio.h>
void main()
{
	int arr[5],i=-1;
	while(i<5)
	{
	
		arr[i]=++i;
	}
	for(i=0;i<5;i++)
		printf("arr[%d] = %d\n",i, arr[i]);
	return 0;
}

/*
arr[0] = garbage
arr[1] = 1
arr[2] = 2
arr[3] = 3
arr[4] = 4
*/
