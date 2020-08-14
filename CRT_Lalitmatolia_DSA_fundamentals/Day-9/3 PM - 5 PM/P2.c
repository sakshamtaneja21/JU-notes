// Stack by using Linked List Implementation
#include<stdio.h>
#include<stdlib.h>

// Structure declaration for STACK
struct node
{
	int data;
	struct node *next;
}*TOP = NULL;

//Prototype declaration for the function
void push(int);
void pop(void);
void peek(void);
void display(void);
void search(int);

int main()
{
	int num, ch;
	do
	{
		printf("\n1. Push Operation");
		printf("\n2. Pop Operation");
		printf("\n3. Peek Operation");
		printf("\n4. Display Operation");
		printf("\n5. Exit");
		printf("\n6. Search");
		printf("\nEnter Your Choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter any Number");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			case 6:
				printf("Enter any Element to Search");
				scanf("%d",&num);
				search(num);
				break;
			default:
				printf("Invalid Choice");
		}
	}while(1);
}
void push(int num)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = TOP;
	TOP = temp;
}
void pop(void)
{
	struct node *q = TOP;
	if(TOP==NULL)
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		printf("Popped Element:%d", q->data);
		TOP = TOP->next;
		free(q);
	}
}
void peek(void)
{
	struct node *q = TOP;
	if(TOP==NULL)
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		printf("Peek Element:%d", q->data);
	}
}
void display(void)
{
	struct node *q = TOP;
	printf("Elements of Stack using Linked List\n");
	do
	{
		printf("%d\t",q->data);
		q = q->next;
	}while(q!=NULL);
}
void search(int num)
{
	
}
