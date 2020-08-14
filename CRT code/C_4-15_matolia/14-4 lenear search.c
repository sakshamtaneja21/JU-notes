#include<stdio.h>
#include<stdlib.h>

//linear search

int main()
{
	int a[10], i , pos, flag =0, num;
	printf("Enetr any 10 numbers");
	for(i=0; i<10; i++)
	{
		printf("Enter %d  Number", i+1);
		scanf("%d", &a[i]);
	}
	printf("elements of array\n");
	for(i=0; i<10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n Enter any number to search\n");
	scanf("%d", &num);
	
	for(i=0; i<10; i++)
	{
		if(a[i]==num)
		{
			flag =1;
			pos =i;
			break;
		}


	}
	if(flag ==1)
		  printf("\nelement found at locatin %d", pos +1);
	else
		  printf("element not found");
	
	return 0;
}
