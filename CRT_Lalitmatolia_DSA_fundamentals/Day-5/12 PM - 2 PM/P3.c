#include<stdio.h>
int main()
{
	char *p[5]={
		"Abhay",
		"Ravi",
		"Lakshay",
		"Akshay",
		"Ramit"
	};
	
	int i;
	printf("Strings\n");
	for(i=0; i<5; i++)
	{
		printf("%s\n",p[i]);
	}
	return 0;
}
