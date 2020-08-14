#include<stdio.h>
int main()
{
	int r, c, line;
	char ch;
	printf("Enter Line Number:");
	scanf("%d", &line);
	for(r=1; r<=line; r++)
	{
		ch = 'A';
		for(c=1; c<=r; c++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
/*
line = 5
r=1; 1<=5
	ch='A';
	c = 1; 1 <= 1
	c = 2; 2 <= 1

r=2; 2<=5
	ch='A'
	c = 1; 1 <= 2
	c = 2; 2 <= 2
	c = 3; 3 <=2
r=3; 3<=5
	ch='A'
	c = 1; 1<=3	A
	c = 2; 2<=3	B
	c = 3; 3<=3	C
	c = 4; 4<=3	X


*/
A
AB
ABC
ABCD
ABCDE

