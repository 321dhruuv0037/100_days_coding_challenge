#include <stdio.h>

int a[25], n;

void insertion_sort(){
    int i, j, temp, count = 0;
    for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;

		while((temp<a[j])) //to shift the greater value towards right
        {
			a[j+1]=a[j]; 
			j=j-1;
		} 	
		a[j+1]=temp; //to store the smaller digit(a[i]) at left
        
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

    insertion_sort();

    printf("\nThe sorted list is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}