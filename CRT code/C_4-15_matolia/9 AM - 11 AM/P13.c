#include<stdio.h>
int main()
{
	int i=1;
	for(++i; i++<=10; ++i)
	{
		;
	}
		printf("%d",i);
	return 0;
}

/*
i = 1
2
3 <= 10
5 <= 10
7 <= 10
9 <= 10
11 <= 10 X
*/

// 3579

