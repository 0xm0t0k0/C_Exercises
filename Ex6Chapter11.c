/*Exercise 6 Chapter 11*/

#include <stdio.h>

void find_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int n;
    scanf("%d", &n); //Get n value

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]); //Populate array
    }

    int p, q;

    find_largest(array, n, &p, &q);

    printf("%d %d\n", p, q);


}


void find_largest(int a[], int n, int *largest, int *second_largest)
{
    int length = n-1;
    int tmp;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[length]){
            tmp = a[length];
            a[length] = a[i];
            a[i] = tmp;
        }
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[length-1])
        {
            tmp = a[length-1];
            a[length-1] = a[j];
            a[j] = tmp;
        }
        if (a[length - 1] == a[length])
            break;
    }

    *largest = a[length]; 
    *second_largest = a[length - 1];

}
