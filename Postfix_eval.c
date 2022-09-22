#include <stdio.h>
#define size 20

int stack[size];
char eq[size];
int top=-1,n=0;

int eval();
void push(int n);
int pop();

int main()
{
    //Asking user to input equation
    printf("\nEnter equation : ");
    gets(eq);
    //printing solution of equation
    printf("\nThe solution of above equation is : %d", eval());
}

void push(int n)
{
    if (top==size-1) //checks if the stack is full
    {
        printf("Overflow!\n");
    }
    else
    {
        top++; //increments top
        stack[top]=n; //adds number in the stack
        //printf("\npushed %d",n);
    }    

}

int eval()
{
    int i,n1,n2;
    for ( i = 0; eq[i] != '\0'; i++)
    {
        if (eq[i]>='0'&&eq[i]<='9')
        {
            n=eq[i]-'0';
            push(n);
        }
        else
        {   
            n2=pop();
            //printf("\nn2=%d", n2);
            n1=pop();
            //printf("\nn1=%d", n1);

            switch (eq[i])
            {
                case '+' :  n=n1+n2;
                            push(n);
                            break;

                case '-' :  n=n1-n2;
                            push(n);  
                            break;

                case '*' :  n=n1*n2;
                            push(n);
                            break;

                case '/' :  n=n1/n2;
                            push(n);
                            break;

                case '%' :  n=n1%n2;
                            push(n);
                            break;

            }   
        
        }
        
    }   
    return pop();
}

int pop()
{
    if (top==-1) //checks if stack is empty
    {
        printf("Underflow!\n");
    }
    else
    {
        //printf("\npopped %d", stack[top]);
        return stack[top--];        
    }
    
}