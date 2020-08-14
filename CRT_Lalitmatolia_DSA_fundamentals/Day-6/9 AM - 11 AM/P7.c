#include<stdio.h>
struct stud
{
	int a;
	float f;
	char ch[4];
};
int main()
{
	struct stud s1 = {12, 45.0};
	printf("%u %u %u\n", &s1.a, &s1.f, &s1.ch[0]);
	printf("%d\n",sizeof(s1));
	return 0;
}
