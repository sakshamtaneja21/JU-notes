#include<stdio.h>
int main()
{
	union student
	{
		int a;
		char ch[2];
	}u;
	u.a = 320;
	printf("u.a = %d\n", u.a);
	u.ch[0]=65;
	printf("u.a = %d u.ch[0]=%d\n", u.a, u.ch[0]);
	u.ch[1]=1;
	printf("u.a = %d u.ch[0]=%d u.ch[1]=%d\n", u.a, u.ch[0], u.ch[1]);
	return 0;
}
