#include<stdio.h>
#define size 20

char stack[size];
int top=-1;

void push(char ch);
char pop();

int main(){
    char infix[30], postfix[30], y;
    int i, j=0, n;
    printf("\nEnter infix equation : ");
    gets(infix);    

    for ( i = 0; infix[i] != '\0' ; i++) {
        y = stack[top];
        if (infix[i]>='0' && infix[i]<='9')
        {
            postfix[j++]=infix[i];
        }

        else if (infix[i]=='(')
        {
            push(infix[i]);
        }
        
        else if (infix[i]==')')
        {
            char ch = pop();
            while (ch != '(')
            {
                postfix[j++] = ch;
                ch=pop();
            }           
        }
                              
        else if (top==-1 || y=='(' || y>infix[i])
        {
            push(infix[i]);
        }
        
        else if (y<=infix[i])
        {
            postfix[j++]=pop();
            push(infix[i]);
        }

    }

    while (top>=0)
    {
        postfix[j++]=pop();
    }
        
    postfix[j]="\0";

    printf("\nThe infix equation in postfix form is : ");
    puts(postfix);

}

void push(char ch)
{
    if (top==size-1) //checks if the stack is full
    {
        printf("Overflow!\n");
    }
    else
    {
        top++; //increments top
        stack[top]=ch; //adds number in the stack
        //printf("\npushed %c",ch);
    }    

}

char pop()
{
    if (top==-1) //checks if stack is empty
    {
        printf("Underflow!\n");
    }
    else
    {
        //printf("\npopped %c", stack[top]);
        return stack[top--];        
    }
    
}   //remove the commented print statements in push, pop, n1 and n2 to see how the calculation actually occurs