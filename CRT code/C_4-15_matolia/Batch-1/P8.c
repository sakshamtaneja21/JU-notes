#include<stdio.h>
int main()
{
	struct stud
	{
		int a; // 4 bytes
		char name[10]; // 10 bytes
		float f; // 4 bytes
	}s;
	
	union st
	{
			int a;
			char name[10];
			float f;
	}u;
	
	printf("sizeof(s)=%d\n", sizeof(s));
	printf("sizeof(s.a)=%d\n", sizeof(s.a));
	printf("sizeof(s.name)=%d\n", sizeof(s.name));
	printf("sizeof(s.f)=%d\n", sizeof(s.f));
	
	printf("sizeof(u)=%d\n", sizeof(u));
	return 0;
}
