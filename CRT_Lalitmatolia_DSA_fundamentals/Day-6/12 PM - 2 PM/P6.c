#include<stdio.h>
int main()
{
	struct address
	{
		char name[12];
		char phone[15];
		char city[25];
		long int pin;
	};
	struct emp
	{
		char name[25];
		struct address a;
	};
	
	struct emp e={"Rahul","Kapil","325644","Jaipur",332033};
	printf("Name=%s Phone=%s\n",e.name, e.a.phone);
	printf("City=%s Pin=%d\n",e.a.city,e.a.pin);
	printf("Name=%s\n", e.a.name);
	printf("%u\n", sizeof(long int));
	printf("%u\n", sizeof(e));
	return 0;
}
/*
e.name = Kapil

*/

