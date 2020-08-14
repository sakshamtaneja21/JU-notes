#include<stdio.h>
int main()
{
	int a = 65;
	switch(a)
	{
		case a>= 65 && a <= 90:
			printf("Hello");
			break;
		case a>=97 && a <= 122:
			printf("Bye");
			break;
		case a >= 48 && a <= 57:
			printf("Hi");
			break;
		default:
			printf("Invalid");
			break;
	}
}
/*
1. Expression not allowed in the case statement.
2. Floating Value not allowed in the switch-case statment
3. Only characters and integers allowed in the switch case statement
4. Variable's not allowed in the case statement
*/
