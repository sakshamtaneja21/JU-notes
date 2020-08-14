#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int FRONT = -1, REAR = -1;
int QUEUE[MAX];


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
	if(FRONT==0 && REAR ==0)
	{
		printf("QUEUE inserted");
		return;
	}
	else if(FRONT ==-1)
	{
		FRONT =0;
		REAR = 0;
	}
	else
	{
		REAR = REAR +1;
	}
	QUEUE[REAR] = num;
}


void qdeleat()
{
	int num;
	if(FRONT==-1)
	{
		printf("QUEUE EMPTY");
		return;
	}
	else if(FRONT == REAR)
	{
		FRONT = REAR = -1;
	}
	else
	{
		num = QUEUE[FRONT];
		printf("ELEMENT DELEATED");
		FRONT + FRONT +1;
	}
}


void display()
{
	int i;
	printf("element of queue ");
	for(i = REAR; i<=REAR; i++)
	{
		printf("%d\t", QUEUE[i]);
	}
}

