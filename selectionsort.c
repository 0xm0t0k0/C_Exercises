#include <stdio.h>

#define N 10
/*Selection sort*/

void selection_sort(int a[], int len);
int find_biggest(int a[], int len);


int main(void)
{   
    int array[N];
    int length = N;
    //function that asks a user for a series of integers 
    printf("Enter 10 numbers to be sorted: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    //sort the array function
    selection_sort(array,length);

    printf("Array sorted :");
    for (int j = 0; j < N; j++)
    {
        printf("%d ", array[j]);
    }
    printf("\n");
    return 0;
}

void selection_sort(int array[], int len)
{
    //Search array for largest element, move it to the last position
    //Call recursively to sort the firt n-1 elements of the array
    if (len <= 1)
        return;
    find_biggest(array, len);
    selection_sort(array, len - 1);
    
    
}

int find_biggest(int a[], int len)
{   
    int swap;
    int max_index = 0;
    for (int i = 1; i < len; i++)
    {
        if (a[i] > a[max_index])
        {
        max_index = i;
        }
    }
    if (max_index != len - 1)
    {
        swap = a[len - 1];
        a[len - 1] = a[max_index];
        a[max_index] = swap;
    }
    return a[len - 1];
}