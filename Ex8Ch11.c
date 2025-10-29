/*Chapter 11 Exercise 8*/

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int n;
    printf("Specify the length of the array: ");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int *pointer = find_largest(a, n);

    printf("%d", *pointer);

}


int *find_largest(int a[], int n)
{
    int *largest = &a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > *largest)
        {
            largest = &a[i];
        }
        
    }

    return largest;
}