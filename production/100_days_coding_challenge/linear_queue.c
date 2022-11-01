#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();

int main(){

	int choice;

	while(1){

		printf("\nOperations Performed by Queue");
		printf("\n1.Add an Element\n2.Remove an Element\n3.Display Elements in Queue\n4.Exit");
		printf("\nEnter your Choice:");
		scanf("%d",&choice);

		switch(choice){

			case 1: enqueue();
			        break;

			case 2: dequeue();
			        break;

			case 3: display();
			        break;

			case 4: return 0;
			

			default : printf("\nInvalid input");

		}

	}

}

void enqueue(){

	int n;
    printf("Enter element: ");
	scanf("%d",&n);
	if(rear == size - 1){

		printf("Queue is full\n");
	}

	else if(front == -1 && rear == -1){

		front = rear = 0;
		queue[rear] = n;
	}
	else{

		rear ++;
		queue[rear] = n;
	}
}

void dequeue(){

	int n;

	if(front == rear == -1){

		printf("Queue is Empty\n");
	}
	else if(front == rear){

		front = rear = -1;

	}
	else{

		n = queue[front];
		front ++;
		printf("Dequeued element is %d", n);
	}
}

void display(){

	int i;

	if(front == rear == -1){

		printf("Queue is Empty\n");
	}
	else{

		for (i = front; i <= rear; i++)
		{
			printf("%d\n", queue[i]);
		}
	}

}