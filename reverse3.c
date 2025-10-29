/*Reverses a series of numbers (pointer version)*/

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for (p = a; p < a + N; p++){ //For pointer to start of array, as long as pointer smaller than adress of starting pointer + N =so last element of array
        scanf("%d", p);
    }


    printf("In reverse order:");
    for (p = a + N -1 ; p >= a; p--) //For pointer to last place of array (-1 to be in bounds), as long as pointer is bigger or equal to the start of array, decrement each time
        printf(" %d", *p);
    printf("\n");

    return 0;
}