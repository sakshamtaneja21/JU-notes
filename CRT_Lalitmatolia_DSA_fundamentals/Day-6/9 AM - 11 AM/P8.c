#include<stdio.h>
#include<string.h>
struct employee
{
	char name[1024];
	int age;
	float salary;
};
int main()
{
	struct employee e1={"Kunal", 25, 50000.0};
	struct employee e2, e3;
	
	// First
	strcpy(e2.name, e1.name);
	e2.age = e1.age;
	e2.salary = e1.salary;
	
	// Second
	e3 = e1;
	
	printf("%s %d %f\n", e1.name, e1.age, e1.salary);
	printf("%s %d %f\n", e2.name, e2.age, e2.salary);
	printf("%s %d %f\n", e3.name, e3.age, e3.salary);
	printf("%d %d %d\n", sizeof(e1), sizeof(e2), sizeof(e2));
	printf("%d\n", sizeof(e1.name));
	printf("%d\n", sizeof(e1.age));
	printf("%d\n", sizeof(e1.salary));
}
