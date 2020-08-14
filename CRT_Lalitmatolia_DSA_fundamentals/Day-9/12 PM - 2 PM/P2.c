//Circular Linked List
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
void addspec(int, int);

int main()
{
	int num, ch, pos;
	do
	{
		printf("\n1. Create List");
		printf("\n2. Display");
		printf("\n3. Exit");
		printf("\n4. Add Beginning");
		printf("\n5. Add Specific");
		
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
			case 5:
				printf("Enter any Number and its Position");
				scanf("%d%d",&num, &pos);
				addspec(num, pos);
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
		START->next = START;
	}
	else
	{
		q = START;
		//Traverse the list till the end
		while(q->next!=START)
			q = q->next;
		
		// Add New node at the end of the list
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = START;
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
	printf("Circular Linked List Elements\n");
	do
	{
		printf("%d\t", q->data);
		q = q->next;
	}while(q!=START);
}
void addbeg(int num)
{
	struct node *temp, *q=START;
	//Traverse the list till the end
	while(q->next!=START)
		q = q->next;
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = START;
	q->next = temp;
	START = temp;
}
void addspec(int num, int pos)
{
	struct node *q = START, *temp;
	int i;
	for(i=1; i<pos; i++)
		q = q->next;
	
	// Add New Node
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = q->next;
	q->next = temp;
}












