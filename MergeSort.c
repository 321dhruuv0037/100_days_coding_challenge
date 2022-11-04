#include <stdio.h>

int a[25], n;

void mergesort(int low,int mid,int high)
{
    int i,m,k,l,temp[25];
    l=low;
    i=low;                       //iterator for merged array
    m=mid+1;

    while(l<=mid && m<=high)     // this will iterate till all the element from left & right sub-array are compared.
    {                                          
        if(a[l]<=a[m])           // a[l] points to first element of left sub-array
        {                        // a[m] points to first element of right sub-array
            temp[i]=a[l];        // temp is merged array
            l++;    i++;
        }
        else
        {
            temp[i]=a[m];
            m++;    i++;
        }
    } 

    if(l>mid)                    // this is true when all left sub-arr element are compared
    {
        for(k=m;k<=high;k++)     //the remaining elements of right array are stored in merged array
        {
            temp[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=l;k<=mid;k++)
        {
            temp[i]=a[k];
            i++;
        }
    }


    for(k=low;k<=high;k++)
    {
        a[k]=temp[k];
    }
}

void partition(int low,int high)
{
    int mid=0;

    if(low<high)                 // divides the array into half till it has single element
    {
      mid=(low+high)/2;
      partition(low,mid);
      partition(mid+1,high);
      mergesort(low,mid,high);
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

    partition(0, n-1);

    printf("\nThe sorted list is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}