#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
}*FRONT = NULL, *REAR=NULL;

void qinsert(int);
void qdeleat(void);
void display(void);


int main()
{

	int ch, num;

	do
	{
		printf("\n 1. Queue Insert");
		printf("\n 2. Queue Deleat ");
		printf("\n 3. Queue Display");
		printf("\n 4. Exit");
		printf("\n Enter your choice");
		scanf("%d", &ch);


		switch(ch)
		{

			case 1:
				printf("Enter any number");
				scanf("%d", &num);
				qinsert(num);
				break;
			case 2:
				qdeleat();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid choice");
        }



	}while(1);
}

void qinsert(int num)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if (FRONT == NULL)
	{
		FRONT = REAR = temp;
	}
	else
	{
		REAR->next = temp;

	}
	REAR = temp;
}


void qdeleat()
{

}


void display()
{

	struct node *q=FRONT;
	printf("Elements of queue");

	do
	{
		printf("%d\t", q->data);

	}while(q! = NUll);

}

