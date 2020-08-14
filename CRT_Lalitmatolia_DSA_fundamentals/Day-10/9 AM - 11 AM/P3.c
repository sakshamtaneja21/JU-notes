//Linear Search
#include<stdio.h>
int main()
{
	int a[10], i, pos, flag=0, num;
	
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
	//Logic for Linear Search
	for(i=0; i<10; i++)
	{
		if(a[i] == num)
		{
			flag = 1;
			pos = i;
			break;
		}
	}
	if(flag == 1)
		printf("Element Found at Location %d", pos+1);
	else
		printf("Element Not Found");
	return 0;
}
