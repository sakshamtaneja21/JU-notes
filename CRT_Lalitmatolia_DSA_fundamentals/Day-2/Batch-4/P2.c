#include<stdio.h>
int main()
{
	int x = 49;
	while(--x);
	printf("%d", x);
	return 0;
}
/*
x = 49
while(48);
while(47);
while(46);
---------
---------
while(1);
while(0);
Final Answer: 0
*/
