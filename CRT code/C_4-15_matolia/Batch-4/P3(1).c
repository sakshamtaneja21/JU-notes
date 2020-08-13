#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int i;
	printf("%d\n", a[0]);
	printf("%d\n", a[3]);
	
	printf("%u\n", a);
	printf("%u\n", a+1);
	
	for(i=0; i<5; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t", i[a]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t", *(a+i));
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t", *(i+a));
	}
	printf("\n");
}
