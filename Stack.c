#include <stdio.h>
#define size 5 //setting stack size

int stack[size], temp[size], top=-1; //declaring array, top and functions
void push();
void pop();
void empty();
void full();
void clear();
void show();
void search();
void reverse();
void palindrome();

int main(){
    int choice;
    while(1) //to loop the program
    {   //printing a menu
        printf("\n*****Select a function to be performed*****");
        printf("\n1.Push element \n2.Pop element \n3.Check if stack is empty \n4.Check if stack is full \n5.Clear stack \n6.Show stack");
        printf("\n7.Search  \n8.Reverse    \n9.Check if palindrome     \n10.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice); //saves the users choice
 
        switch (choice)
        {
            case 1: push();
                    break;
        
            case 2: pop();
                    break;        
            
            case 3: empty();
                    break;        
            
            case 4: full();
                    break;        
            
            case 5: clear();
                    break;
    
            case 6: show();
                    break;

            case 7: search();
                    break;

            case 8: reverse();
                    break;

            case 9: palindrome();
                    break;

            case 10: return 0; 
        
            default:printf("\nInvalid choice!\n");
        }
    }

}

void push()
{
    int choice;
    if (top==size-1) //checks if the stack is full
    {
        printf("Overflow!\n");
    }
    else
    {
        printf("\nEnter the element to be pushed into the stack : ");
        scanf("%d", &choice);
        top++; //increments top
        stack[top]=choice; //adds element in the stack
    }    

}

void pop()
{
    if (top==-1) //checks if stack is empty
    {
        printf("Underflow!\n");
    }
    else
    {
        printf("\nPopped %d from the stack.\n", stack[top]);
        top--; //decrements top
    }
    
}

void empty()
{
    if (top==-1) //checks if stack is empty
    {
        printf("\nStack is empty!\n");
    }
    else{
        printf("\nStack is not empty.\n");
    }
        
}

void full()
{
    if (top==size-1) //checks if stack is full
    {
        printf("\nStack is full!\n");
    }
    else{
        printf("\nStack is not full.\n");
    }
        
}

void clear()
{
    top=-1; //resets top back to -1
    printf("\nCleared the stack!\n");

}

void show()
{
    if (top==-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {
        for (int i = top; i >= 0; i--) //prints the stack
        {
            printf("%d\n",stack[i]);            
        }
    }
    
}

void search()
{
    if (top==-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {
        int n, count=0;
        printf("\nEnter the element to be searched : ");
        scanf("%d", &n);
        for (int i = top; i >= 0; i--) //prints the stack
        {
            if (n==stack[i])
            {
                count++;
                break;
            }              
        }
        if (count>0)
            printf("Element is present in stack!\n");
        else{
            printf("Element is not present in stack!\n");
        }       
    }
    
}

void reverse()
{
    if (top==-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {   
        int j = 0;
        for (int i = top; i >= 0; i--) 
        {
            temp[j] = stack[i];
            j++;           
        }
        printf("Reversed stack : \n");
        for (int i = top; i >= 0; i--)
        {
            stack[i] = temp[i]; 
            printf("%d\n",stack[i]);
        }
    }
    
}

void palindrome()
{
    if (top==-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {   
        int i, count = 0;
        for ( i = 0 ; i <= top; i++)
        {
            if(stack[i] != stack[top-i]){
                count++;
            }
        }
        if (count>0)
            printf("\nStack is not palindrome!\n");
        else{
            printf("\nStack is palindrome!\n");
        }
        
    }
    
}