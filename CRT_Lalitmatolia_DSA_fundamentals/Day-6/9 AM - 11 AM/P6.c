#include<stdio.h>
struct book
{
	char name[5];   
	float price;
	int pages;
};
int main()
{
	struct book b1;
	struct book b2;
	struct book *b3={"Easy Steps to Learn C", 400, 500};
	
	printf("Enter Elements for Structure 1");
	scanf("%s%f%d",&b1.name, &b1.price, &b1.pages);
	
	printf("Enter Elements for Structure 2");
	scanf("%s%f%d",&b2.name, &b2.price, &b2.pages);
	
	printf("%s %f %d", b3->name, b3->price, b3->pages);
	
	// (*b3).name, (*b3).price, (*b3).pages
	
	printf("%s %.2f %d\n", b1.name, b1.price, b1.pages);
	printf("%s %.2f %d\n", b2.name, b2.price, b2.pages);
	printf("%d\n", sizeof(b1));
	printf("%d %d %d\n", sizeof(b1.name), sizeof(b1.price), sizeof(b1.pages));
	return 0;
}
