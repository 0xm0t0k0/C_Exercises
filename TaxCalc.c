#include <stdio.h>
#define tax 0.24f

//Make a 5% tax included calculator

int main(void)
{
    float amount;

    printf("Enter an amount: ");

    while (scanf("%f", &amount) != 1)
    {
        printf("Correct number format : 100.00\n");
    }

    float tax_calc = amount * tax;
    amount = amount + tax_calc;

    printf("With tax added: %.2f\n", amount);

    return 0;

}