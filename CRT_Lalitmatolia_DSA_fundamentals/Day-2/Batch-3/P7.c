// Arrays: It is the collection of similar type of elements
/*
	int a[5] = {10, 20, 30, 40, 50};
	
	a[0]		a[1]		a[2]		a[3]		a[4]
	10			20			30			40			50
	6487552		6487556		6487560		6487564		6487568		6487572
*/
#include<stdio.h>
int main()
{
	int a[5]={10, 20, 30, 40, 50};
	int i;
	printf("%u\n",a); // Base Address of an 1-D Array
	printf("%u\n", &a);
	
	for(i=0; i<5; i++)
	{
		printf("a[%d] = %d Address=%u\n", i, a[i], &a[i]);
	}
	return 0;
}

/*
i = 0; 0 < 5;
a[0] = 10 Address = 6487552
i = 1; 1 < 5;
a[1] = 20 Address = 6487556
i = 2; 2 < 5;
a[2] = 30 Address = 6487560
i = 3; 3 < 5;
a[3] = 40 Address = 6487564
i = 4; 4 < 5;
a[4] = 50 Address = 6487568
i = 5; 5 < 5; X
*/
