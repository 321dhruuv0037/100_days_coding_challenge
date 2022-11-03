#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *getnode() {
    return ((struct node *)malloc(sizeof(struct node)));
}

void freenode(struct node *p) {
    free(p);
}
struct node *list = NULL;

void insert_atBeg();
void insert_atEnd();
void insert_atPosition();
void delete_atBeg();
void delete_atEnd();
void delete_atPosition();
void display();
void search();
void reverse();
void copy();

int main() {
    int choice;
	while(1) {
        printf("\nStack ADT functions");
        printf("\n1.Insert at Beginning	\n2.Insert at End	\n3.Insert at Position		\n4.Delete at Beginning		\n5.Delete at End");
        printf("\n6.Delete at Position      \n7.Display     \n8.Search      \n9.Reverse     \n10.Copy       \n11.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        printf("\n");
            
        switch(choice){
            case 1: insert_atBeg();
                break;
                
            case 2: insert_atEnd();
                break;
            
            case 3: insert_atPosition();
                break;
            
            case 4: delete_atBeg();
                break;
            
            case 5: delete_atEnd();
                break;
                
            case 6: delete_atPosition();
                break;
                    
            case 7: display();
                break;

            case 8: search();
                break;
                    
            case 9: reverse();
                break;

            case 10: copy();
                break;

            case 11: return 0;
                
            default: printf("Invalid input\n");	
                break;	

        }
    }    	
}

void insert_atBeg(){
    int n;
    printf("\nEnter element to be inserted : ");
    scanf("%d", &n);
    struct node *newnode;
    newnode = getnode();
    newnode->info = n;
    newnode->next = list;
    list=newnode;    

}

void insert_atEnd(){
    int n;
    printf("\nEnter element to be inserted : ");
    scanf("%d", &n);
    struct node *newnode, *temp;
    newnode = getnode();
    newnode->info = n;
    temp=list;
    newnode->next = NULL;
    if (list == NULL)
    {
        list = newnode;
    } else {
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;        
    }
}

void insert_atPosition(){
    int n, count;
    printf("\nEnter element to be inserted : ");
    scanf("%d", &n);
    if (list == NULL)
    {
        printf("List is empty\n");
    } else {
        struct node *newnode, *temp;
        newnode = getnode();
        newnode->info = n;
        temp=list;
        printf("\nEnter position at which %d is to be inserted : ", n);
        scanf("%d", &count);
        while(count>0){
            temp = temp->next;
            count--;
        }
        newnode->next = temp->next;
        temp=newnode;

    }
}

void delete_atBeg(){
    if (list == NULL)
    {
        printf("List is empty\n");
    } else {
        struct node *temp;
        temp= list;
        list = temp->next;
        freenode(temp);

    }    
}

void delete_atEnd(){
    if (list == NULL)
    {
        printf("List is empty\n");
    } else {
        struct node *temp, *del;
        temp = list;
        while (temp->next!=NULL)
        {
            del = temp;
            temp = temp->next;
        }
        del->next = NULL;
        freenode(temp);  

    }
}

void delete_atPosition(){
    if (list == NULL)
    {
        printf("List is empty\n");
    } else {
        struct node *temp, *del;
        int count;
        temp = list;
        printf("\nEnter position at which element is to be inserted : ");
        scanf("%d", &count);
        while(count>0){
            temp = temp->next;
            count--;
        }
        temp->next = NULL;

    }    
}

void display(){
    if (list == NULL)
    {
        printf("List is empty\n");
    } else {
        struct node *temp;
        temp = list;
        printf("\nThe linked list is : ");
        while(temp != NULL){
            printf("%d ", temp->info);
            temp = temp->next;
        }
        printf("\n");
    }
}

void search(){
    if (list == NULL)
    {
        printf("List is empty\n");
    } else {
        struct node *temp;
        int count=0, n;
        temp = list;
        printf("\nEnter element to be searched : ");
        scanf("%d", &n);
        while(temp != NULL){
            if(n == temp->info){
                count++;
                break;
            }
            temp = temp->next;
        }
        if (count>0)
        {
            printf("Element was found\n");
        } else {
            printf("Element is not in the linked list\n");
        }
         
    }    
}

void reverse(){
    struct node *t1, *t2, *temp;
    t1 = t2 = NULL;  
    if (list == NULL){
        printf("List is empty");
    } else {
        while (list != NULL) {
            t2 = list->next;
            list->next = t1;
            t1 = list;
            list = t2;
        }
        list = t1;
        temp = list;
        printf("Reversed linked list is : ");  
        while (temp != NULL) {
            printf("%d ", temp->info);
            temp = temp->next;
        }
        printf("\n");

    }
}

void copy(){
    //working on it
}