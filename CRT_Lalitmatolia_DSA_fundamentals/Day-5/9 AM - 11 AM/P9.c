#include<stdio.h>
int main()
{
	int i;
	for(i=1; i<=20; i++)
	{
		switch(i)
		{
			case 1:
				i+=5;  
				break;
			case 2:
				i+=4; 
			case 3:
				i+=6;
			default:
				i+=4; 
		}
		printf("%d\t", i);
	}
}

// 20

