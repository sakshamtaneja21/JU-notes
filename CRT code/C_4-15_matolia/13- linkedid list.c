#include<stdio.h>
#include<stdlib.h>

//declare singly lined list

struct node
{
	
	int data;
	struct node *next;  //self refrencial sttement
}*START = NULL;

//  function prototype

void createlist(int);
void display(void);

int main()
{
	int num, ch;
	do
	{
		printf("\n1. create list");
		printf("\n2. Display");
		printf("\n3.  exit");
		printf("\nenter your choice");
		scanf("%d", &ch);
		
		
		switch(ch)
		{
			case 1:
				printf("enter any number");
				scanf("%d", &num);
				createlist(num);
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("invalid code");
		}
		
		
	}while(5);
	return 0;
}

void createlist(int num)
{
	struct node *q, *temp;
	if(START = NULL)
	{
		START = (struct node*)malloc(sizeof(struct node));
		START->data = num;
		START->next = NULL;
	}
	else
	{
		q= START;
		// traverse
		while(q->next!=NULL)
		{
			
			q = q->next;
		}
		     
		
		// new node
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
		temp->next = NULL;
		q->next = temp;
		
	}
}

void display()
{
	struct node *q = START;
	printf("singly linkedid list element \n");
	do
	{
	printf("%d\t", q->data);
	}while(q!=NULL);


}
