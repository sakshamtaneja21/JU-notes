#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int *p;
	int i;
	p = &a;
	printf("%u\n", p + 1);
	
	printf("%u\n",a);
	printf("%u\n", &a);
	printf("%u\n", a + 1);
	printf("%u\n", a + 2);
	printf("%u\n", a + 4);
	printf("%u\n", *a);
	printf("%u\n", *(a+4));
	printf("%u\n", *(4+a));
	printf("%u\n", &a + 1);
	printf("%u\n", &a + 2);
	printf("Addresses of Array");
	for(i=0; i<5; i++)
	{
		printf("\n%u = %d",a+i, *(a+i));
	}
	return 0;
}
