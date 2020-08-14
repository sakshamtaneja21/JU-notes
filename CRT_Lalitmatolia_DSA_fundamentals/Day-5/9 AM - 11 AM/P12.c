#include<stdio.h>
int main()
{
	int i = 1;
	while(i<=10)
	{
		i++;
		if(i==5)
			continue;
		else
			printf("%d\t", i);
		
	}
	printf("JECRCJU");
}
/*
break: 1	2	3	4	JECRCJU
continue: 1	2	3	4	infinite
exit(0): 1	2	3	4
*/
