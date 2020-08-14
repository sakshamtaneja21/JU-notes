#include<stdio.h>
int main()
{
	char str[]="Fascimile";
	printf("%s\n", str);
	printf("%s\n", str+5);
	printf(5+"Fascimile");  // str + 5
	printf("\n");
	printf("%c\n", *str);
	printf("%u\n", *(str+9));
	printf("%u\n", *(str+5));
	printf("%c\n", *(str+5));
	return 0;
}
