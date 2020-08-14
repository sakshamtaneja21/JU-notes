#include<stdio.h>
#include<string.h>
main()
{
	int size;
	printf("Enter any Size for the String:");
	scanf("%d",&size);
	fflush(stdin); // stdin - standard input, stdout -standard output
	char str[size];
	char *s;
	printf("Enter any String:");
	gets(str);
	
	
	s=str+strlen(str)-1;
	printf("After Reverse\n");
	while(s>=str)
	{
		printf("%c",*s);
		s--;
	}
}
