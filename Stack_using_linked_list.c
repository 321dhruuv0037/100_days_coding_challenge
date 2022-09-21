#include<stdio.h>
#include<stdlib.h>

struct node {
	int info; //to store value
	struct node *next; //to store address
}; 

struct node *getnode()
{
	
	return ((struct node*)malloc(sizeof(struct node))); //returns memory address allocated
};

void freenode(struct node *p)
{
	free(p); //deletes node
}

struct node *list=NULL;

void push();
void pop();
void display();
void search();

int main()
{
	while(1)
	{
		int choice;
		printf("\nStack ADT functions");
		printf("\n1.Push	\n2.Pop	\n3.Display		\n4.Search		\n5.Exit");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1: push();
				break;
			
			case 2: pop();
				break;
		
			case 3: display();
				break;
		
			case 4: search();
				break;
		
			case 5: return 0;
			
			default: printf("Invalid input");	
				 break;	
		}
	}
	
	
}

void push()
{
	int n;
	printf("\nEnter element to be added : ");
	scanf("%d",&n);
	struct node *newnode;
	newnode=getnode(); 
	newnode->info=n; //stores value in node
	newnode->next=list; 
	list=newnode; //list pointer points at new element
}

void pop()
{
	if(list==NULL) //checks if stack is empty
		printf("\nStack is empty");
	else
	{
		struct node *newnode;
		newnode=list;
		list=newnode->next;
		freenode(newnode); //deletes node
	}
}

void display()
{
	if(list==NULL) //checks if stack is empty
	{
		printf("\nStack is empty");
	}		
	else
	{
		struct node *newnode;
		newnode=getnode();
		newnode=list;
		while(newnode!=NULL)
		{
			printf("\n%d", newnode->info); //prints info 
			newnode=newnode->next; //changes the newnode pointer to next node
		}
	}
}

void search()
{
	int n, count=0;
	
	if(list==NULL) //checks if stack is empty
		printf("\nStack is empty");
	else
	{
		printf("\nEnter element to be searched : ");
		scanf("%d",&n);
		struct node *newnode;
		newnode=list;
		while(newnode!=NULL)
		{
			if(newnode->info==n){
				count++; //increases counter if there is a match present
				break;
			}
			newnode=newnode->next; //changes the newnode pointer to next node
		}
		if(count>0)
			printf("\nElement is present in stack!");
		else
			printf("\nElement is not present in stack!");
	}
}
