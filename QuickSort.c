#include <stdio.h>

int a[25], n;

void quicksort(int first,int last)
{
    int pivot,j,temp,i;

    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;

        quicksort(first,j-1);
        quicksort(j+1,last);
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

    quicksort(0, n-1);

    printf("\nThe sorted list is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}