#include <stdio.h>

int a[25], x, n;
void binary_search(int low, int high){
    int mid;
    if(low>high){
        printf("Element not found");
    }
    else{
        mid = (low+high) /2;
        if (x == a[mid])
        {
            printf("Element %d found!",x);
        } else if (x > a[mid]) {
            binary_search(mid+1, high);
        } else {
            binary_search(low, mid-1);
        }
    }
    
    
}
void selection_sort(){
    int i, j, temp;
    for ( i = 0; i < n-1; i++) 
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }    
}

int main(){
    int i;
    printf("\nEnter no of elements present in array : ");
    scanf("%d", &n);
    //printf("\nNOTE: Entered elements should be sorted. ");
    for ( i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter element to be searched : ");
    scanf("%d", &x);
    selection_sort();
    binary_search(0, n-1);
    
}