#include<stdio.h>
union student
{
	int a;
	char ch[13];
};
int main()
{
	union student u;
	printf("%d\n", sizeof(u));
}
