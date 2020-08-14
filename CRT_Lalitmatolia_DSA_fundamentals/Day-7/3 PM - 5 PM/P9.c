#include<stdio.h>
int main()
{
	int arr[6];
    int *a=arr;
    printf("%d\n", sizeof(*a));
    printf("%d\n",sizeof(a));
	return 0;
}

