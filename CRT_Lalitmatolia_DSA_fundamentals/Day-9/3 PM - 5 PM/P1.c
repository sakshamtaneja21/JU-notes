// Stack by using Array Implementation
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int TOP = -1;
int STACK[MAX];

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
	if(TOP == MAX-1)
	{
		printf("Stack Overflow");
		return;
	}
	else
	{
		TOP = TOP + 1;
		STACK[TOP] = num;
	}
}
void pop(void)
{
	int num;
	if(TOP == -1)
	{
		printf("Stack Underflow");
		return;
	}
	else
	{
		num = STACK[TOP];
		printf("Popped Element:%d", num);
		TOP = TOP - 1;
	}
}
void peek(void)
{
	if(TOP == -1)
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		printf("Peek Element:%d", STACK[TOP]);
	}
}
void display(void)
{
	int i;
	if(TOP == -1)
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		printf("Elements of the STACK\n");
		for(i=TOP; i>=0; i--)
		{
			printf("%d\t", STACK[i]);
		}
	}
}
void search(int num)
{
	int flag = 0, i, pos;
	if(TOP == -1)
	{
		printf("Stack Empty");
		return;
	}
	else
	{
		for(i=TOP; i>=0; i--)
		{
			if(STACK[i] == num)
			{
				pos = i;
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			printf("Element Found at Location:%d", pos+1);
		else
			printf("Element Not Found");
	}
}
