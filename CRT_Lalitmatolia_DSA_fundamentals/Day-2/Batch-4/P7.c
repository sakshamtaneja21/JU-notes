//Arrays: It is the collection of similar type of elements
/*
	int a[5] = {10, 20, 30, 40, 50};
	
	a[0]		a[1]		a[2]		a[3]		a[4]
	10			20			30			40			50
	6487552		6487556		6487560		6487564		6487568
*/
#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int i;
	printf("%u\n", a); // 
	printf("%u\n", &a);
	
	for(i=0; i<5; i++)
	{
		printf("a[%d] = %d Address=%u Address=%u Value=%d\n ", i, a[i], &a[i], (a+i), *(a+i));
	}
	return 0;
}
/*
a[i] = i[a] = *(a+i) = *(i+a)
a[0] = 0[a]
*(a+0) = *(0+a)
*a = *a
*/
