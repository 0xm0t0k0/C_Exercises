#include <stdio.h>

//Modified program for a variable x and then calculate the sum of the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 using Horner's Rule

int main(void)
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int calculate = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("The result to the polynomial is : %d\n", calculate);

    return 0;
}