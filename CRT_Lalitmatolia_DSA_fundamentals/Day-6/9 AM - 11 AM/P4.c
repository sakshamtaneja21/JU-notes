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


