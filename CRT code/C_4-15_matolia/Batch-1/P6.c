#include<stdio.h>
int main()
{
	int a[10];
	int b[2][3];
	char ch[10] = "Hello";
	char ch1[]="Hello";
	char *p = "Hello";
	int *q;
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0]));
	
	printf("sizeof(b)=%d\n", sizeof(b));
	printf("sizeof(ch)=%d\n", sizeof(ch));
	printf("sizeof(ch1)=%d\n", sizeof(ch1));
	printf("sizeof(*ch1)=%d\n", sizeof(*ch1));
	printf("sizeof(p)=%d\n", sizeof(p));
	printf("sizeof(*p)=%d\n", sizeof(*p));
	printf("*p=%c\n", *p);
	printf("sizeof(q)=%d\n", sizeof(q));
	printf("sizeof(float)=%d\n", sizeof(float));
	printf("sizeof(double)=%d\n", sizeof(double));
	printf("sizeof(long double)=%d\n", sizeof(long double));
	
	printf("strlen(ch1)=%d sizeof(ch1)=%d", strlen(ch1), sizeof(ch1));
	return 0;
}


