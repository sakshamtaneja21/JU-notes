// Stack by using Linked List Implementation
#include<iostream>
using namespace std;

class STACK
{
	private:
		struct node
		{
			int data;
			node *next;
		}*TOP;
	public:
		STACK()
		{
			TOP = NULL;
		}
		void push(int);
		void pop(void);
		void peek(void);
		void display(void);
		void search(int);
};

void STACK :: push(int num)
{
	node *temp;
	temp = new node;
	temp->data = num;
	temp->next = TOP;
	TOP = temp;
}
void STACK :: pop()
{
	node *q = TOP;
	if(TOP==NULL)
	{
		cout<<"Stack Empty"<<endl;
		return;
	}
	else
	{
		cout<<"Popped Element:"<<q->data;
		TOP = TOP->next;
		delete q;
	}
}
void STACK :: peek()
{
	node *q = TOP;
	if(TOP==NULL)
	{
		cout<<"Stack Empty"<<endl;
		return;
	}
	else
	{
		cout<<"Peek Element:"<<q->data;
	}
}
void STACK :: display()
{
	node *q = TOP;
	cout<<"Elements of Stack using Linked List\n";
	do
	{
		cout<<q->data<<"\t";
		q = q->next;
	}while(q!=NULL);
}

void STACK :: search(int num)
{
	
}
int main()
{
	int num, ch;
	STACK obj;
	do
	{
		cout<<"\n1. Push Operation";
		cout<<"\n2. Pop Operation";
		cout<<"\n3. Peek Operation";
		cout<<"\n4. Display Operation";
		cout<<"\n5. Exit";
		cout<<"\n6. Search";
		cout<<"\nEnter Your Choice";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter any Number";
				cin>>num;
				obj.push(num);
				break;
			case 2:
				obj.pop();
				break;
			case 3:
				obj.peek();
				break;
			case 4:
				obj.display();
				break;
			case 5:
				exit(0);
			case 6:
				cout<<"Enter any Element to Search";
				cin>>num;
				obj.search(num);
				break;
			default:
				cout<<"Invalid Choice";
		}
	}while(1);
}
