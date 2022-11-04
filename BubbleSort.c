#include <stdio.h>

int a[25], n;

void bubble_sort(){
    int i, j, temp, count =0;
    for ( i = n-2; i >= 0; i--) //since the last array index is n-1 and we sort till the second last element
    {
        for ( j = 0; j <= i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
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

    bubble_sort();

    printf("\nThe sorted list is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}