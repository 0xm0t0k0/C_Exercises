/*Quicksort*/

#include <stdio.h>

#define N 10

void  quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void){

    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high) 
{
    int middle;

    if (low >= high) return; //Base case: 1 or  0 elements
    middle = split(a, low, high);
    printf("%d\n", middle);//partition and get pivot position
    quicksort(a, low, middle - 1); //Sort left subarray
    quicksort(a, middle + 1, high); //Sort right subarray
}

int split (int a[], int low, int high)
{
    int part_element = a[low]; //Choose first element as pivot
    
    printf("%d\n", part_element); // debugging and understanding

    for (;;) {
        //Move from right: find the element thats smaller than pivot aka a[low]
        while (low < high && part_element <= a[high])
            high--;
        if (low >= high) break;
        a[low++] = a[high];  //Move small element left
        printf("%d%d\n", a[low], a[high]);

        //Move form left: find element >= pivot
        while (low < high && a[low] <= part_element)
            low++;
        if (low >= high) break;
        a[high--] = a[low]; //Move large element right
        printf("%d%d\n", a[high], a[low]);

    }
    a[high] = part_element; //Place pivot in final position
    printf("%d\n",a[high]);
    return high; //return pivot's final position
}