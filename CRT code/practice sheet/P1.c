#include<stdio.h>
#include<stdlib.h>
//To declare the structure for singly linked list
struct node
{
	int data;
	struct node *next; //self-referential structure
}*START=NULL;

// Function Prototype
void createList(int);
void display(void);
void addbeg(int);

int main()
{
	int num, ch;
	do
	{
		printf("\n1. Create List");
		printf("\n2. Display");
		printf("\n3. Exit");
		printf("\n4. Add Beginning");
		printf("\nEnter Your Choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter any Number");
				scanf("%d",&num);
				createList(num);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
			case 4:
				printf("Enter any Number");
				scanf("%d",&num);
				addbeg(num);
				break;
			default:
				printf("Invalid Choice");
		}
	}while(1);
	return 0;
}
void createList(int num)
{
	struct node *q, *temp;
	// For First Node
	if(START == NULL)
	{
		START = (struct node*)malloc(sizeof(struct node));
		START->data = num;
		START->next = NULL;
	}
	else
	{
		q = START;
		//Traverse the list till the end
		while(q->next!=NULL)
			q = q->next;
		// Add New node at the end of the list
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = NULL;
		q->next = temp;
	}
}
void display()
{
	struct node *q = START;
	if(q==NULL)
	{
		printf("List is Empty");
		return;
	}
	printf("Singly Linked List Elements\n");
	do
	{
		printf("%d\t", q->data);
		q = q->next;
	}while(q!=NULL);
}
void addbeg(int num)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = START;
	START = temp;
}


