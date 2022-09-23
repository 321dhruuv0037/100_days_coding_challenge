#include<stdio.h>
#define size 5

int queue[size], front = -1, rear = -1;

void enqueue();
void dequeue();
void isEmpty();
void show();

int main()
{
    int choice;
    
    while (1)
    {
        printf("\n*****Select a function to be performed*****");
        printf("\n1.Enqueue       \n2.Dequeue       \n3.Is Empty       \n4.Show        \n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice); //saves the user's choice

        switch (choice)
        {
            case 1: enqueue();
                    break;
        
            case 2: dequeue();
                    break;
    
            case 3: isEmpty();
                    break;
    
            case 4: show();
                    break;

            case 5: return 0; 
        
            default:printf("\nInvalid choice!\n");

        }

    }
    
}

void enqueue()
{
    int n;
    
    if (front==-1 && rear==-1) //checks if queue is empty
        {
            printf("\nEnter element to be added to the queue : ");
            scanf("%d", &n);
            front++;
            queue[++rear]=n;
        }

    else 
    {
        
        
        if (front == (rear++) % size) //checks if queue is full
        {
            printf("\nQueue overflow!");
        }

        else
        {
            printf("\nEnter element to be added to the queue : ");
            scanf("%d", &n);
            rear = (rear++)%size;
            queue[rear]=n;
        }
        
    }
    
}

void dequeue()
{
    if (front==-1 && rear==-1) //checks if queue is empty
    {
        printf("\nQueue underflow!");
    }

    else
    {
        if (front==rear) //checks if only one element is present in queue
        {
            front=-1;
            rear=-1;
        }

        else
        {
            front=(front++)%size; 
        }
        
    }

}

void isEmpty()
{
    if (front==-1 && rear==-1) //checks if queue is empty
    {
        printf("\nQueue is empty!");
    }

    else
    {
        printf("\nQueue is not empty!");
    }

}

void show()
{
    int i, j;

    if (front==-1 && rear==-1) //checks if queue is empty
    {
        printf("\nQueue is empty!");
    }

    else
    {
        for(i = front; i < size; i++)
        {
        	j = i%size;
        	
        	if(rear == front)
        	{
        		printf("\n%d", queue[j]);
			}

        	else if(i == front)
        	{
        		printf("\n%d",queue[j]);
			}

			else if(i == rear)
			{
				printf("\n%d",queue[j]);
			} 

			else
			{
            	printf("\n%d", queue[j]);
        	}

        }
    }
    
}