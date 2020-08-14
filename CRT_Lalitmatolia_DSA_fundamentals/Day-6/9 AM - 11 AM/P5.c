#include<stdio.h>
int main()
{
	char s1[10];
	char s2[10];
	char s3[30];
	printf("Enter First String");
	gets(s1);
	printf("Enter Second String");
	gets(s2);
	
	char *p, *q, i=0;
	p = s1;
	q = s2;
	while(*p)
	{
		s3[i] = *p;
		p++;
		i++;
	}
	s3[i]=' ';
	i++;
	while(*q)
	{
		s3[i] = *q;
		q++;
		i++;
	}
	printf("%s", s3);
	return 0;
}
