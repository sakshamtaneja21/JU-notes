#include<stdio.h>
struct stud
{
	int eno;
	char name[10];
	int age;
};
int main()
{
	struct stud s1 = {1001, "Kunal", 25};
	printf("%u %u %u\n", &s1.eno, &s1.name, &s1.age);
	printf("%u\n", sizeof(s1));
	func(&s1);
	return 0;
}
func(struct stud *s)
{
	printf("%u\n", sizeof(s));
	printf("Eno=%d\n", s->eno);
	printf("Name=%s\n", s->name);
	printf("Age=%d\n", s->age);
	
	printf("Eno=%d\n", (*s).eno);
	printf("Name=%s\n", (*s).name);
	printf("Age=%d\n", (*s).age);
}
