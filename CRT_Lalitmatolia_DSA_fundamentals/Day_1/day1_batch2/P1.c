int a=100;
int main()
{
	printf("Global=%d", a);
	int a = 500;
	printf("%d", a);
	{
		printf("A=%d", a);
		int a = 300;
		printf("A=%d", a);
	}
}
