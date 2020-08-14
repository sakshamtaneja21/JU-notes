#include<stdio.h>
int main()
{
	int x = 10, y = 15, a, b, c, d, e, f;
	a = x & y;
	b = x | y;
	c = x ^ y;
	d = x << 2;
	e = x >> 2;
	f = ~x;
	
	printf("A=%d B=%d C=%d D=%d E=%d F=%d", a, b, c, d, e, f);
	return 0;
}
