#include<stdio.h>
int main()
{
	int f = 1, n;
	int i;
	printf("Enter any Number:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
		f = f*i;
	
	printf("Factorial=%d", f);
	
	return 0;
}
