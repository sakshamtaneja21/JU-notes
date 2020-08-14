#include<stdio.h>
int main()
{
	int i = 1;
	while(i<=10)
	{
		++i;
		if(i==5)
		{
			continue;
		}
		printf("%d\t", i);  // 2  3  4  6  7  8  9  10  11
	}
	return 0;
}

/*
i = 1
1 <= 10

*/

/*
initialization;
while(condition)
{
	statement;
	increment/decrement;
}
*/

// break: To come out of the loop or switch statement
// continue: To skip the current iteration and iterate the next one
// exit(0): To exit from theprogram
