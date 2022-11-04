#include <stdio.h>

int a[25], n;

void selection_sort(){
    int i, j, temp, count = 0;
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
        count++;
        printf("\nAfter %d pass : \n", count);
        for ( temp = 0; temp < n; temp++)
        {        
            printf("%d\t", a[temp]);
        }   
    }    
}

int main(){
    int i;
    printf("\nEnter no of elements to be sorted : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }

    selection_sort();

    printf("\nThe sorted list is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}