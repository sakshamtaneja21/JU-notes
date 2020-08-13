#include<stdio.h>
#include<string.h>
int main()
{
	int a[10];
	char ch[20]="Hello";
	char ch1[]="Hello";
	char *p = "Hello";
	
	printf("a=%d\n",sizeof(a));
	printf("ch=%d\n",sizeof(ch));
	printf("ch1=%d\n",sizeof(ch1));
	printf("p=%d\n",sizeof(p));
	printf("strlen(ch)=%d sizeof(ch)=%d\n",strlen(ch), sizeof(ch));
	printf("*p=%d\n",sizeof(*p));
	return 0;
}
