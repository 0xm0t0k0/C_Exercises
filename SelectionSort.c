/*Selection Sort*/

#include <stdio.h>

void selection_sort(int array[], int number);


int main(void)
{
    int n; //number of integers
    printf("How many integers do you wanna sort: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    printf("\n");

    selection_sort(a, n);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
    

}

void selection_sort(int array[], int number)
{
    int tmp; 
    int max = number - 1;
    if (number == 0)
        return;
    for (int i = 0; i < number; i++)
        {
            if (array[i] > array[max])
            {
                tmp = array[max];
                array[max] = array[i];
                array[i] = tmp;
            } 
        }
    selection_sort(array, number - 1);
}   