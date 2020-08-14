#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int FRONT=-1, REAR=-1;
int QUEUE[MAX];

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
	if(FRONT==0 && REAR == MAX-1)
	{
		printf("Queue is Full");
		return;
	}
	else if(FRONT==-1)
	{
		FRONT = REAR = 0;
	}
	else
	{
		REAR = REAR + 1;
	}
	QUEUE[REAR] = num;
}
void qdelete()
{
	int num;
	if(FRONT==-1)
	{
		printf("Queue Empty");
		return;
	}
	else if(FRONT == REAR)
	{
		FRONT = REAR = -1;
	}
	else
	{
		num = QUEUE[FRONT];
		printf("Element Deleted:%d", num);
		FRONT = FRONT + 1;
	}
}
void display()
{
	int i;
	printf("Elements of Queue");
	for(i=FRONT; i<=REAR; i++)
	{
		printf("%d\t", QUEUE[i]);
	}
}
