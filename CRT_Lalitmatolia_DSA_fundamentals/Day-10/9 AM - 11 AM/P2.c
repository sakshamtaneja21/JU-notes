#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*FRONT=NULL, *REAR=NULL;

//Prototype declration for Queue Function
void qinsert(int);
void qdelete(void);
void display(void);

int main()
{
	int ch, num;
	do
	{
		printf("\n1. Queue Insert");
		printf("\n2. Queue Delete");
		printf("\n3. Queue Display");
		printf("\n4. Exit");
		printf("\nEnter Your Choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter any Number");
				scanf("%d",&num);
				qinsert(num);
				break;
			case 2:
				qdelete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Choice");	
		}	
	}while(1);
}
void qinsert(int num)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(FRONT == NULL)
	{
		FRONT = REAR = temp;
	}
	else
	{
		REAR->next = temp;
	}
	REAR  = temp;
}
void qdelete()
{
	struct node *q = FRONT;
	if(FRONT==NULL)
	{
		printf("Queue Empty");
		return;
	}
	else
	{
		printf("Deleted Element:%d", FRONT->data);
		FRONT = FRONT->next;
		free(q);
	}
}
void display()
{
	struct node *q=FRONT;
	printf("Elements of Queue");
	do
	{
		printf("%d\t", q->data);
		q = q->next;
	}while(q!=NULL);
}
