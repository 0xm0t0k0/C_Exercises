#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false}; // Makes all elements in the array to be false
    int digit; //Declare variable digit
    long n; //Declare n (long because we want to be able to handle big numbers from user input)

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) { // We start with the number that the user input
        digit = n % 10; // We create a digit from the last position of the long n
        if (digit_seen[digit]) //if the array element of that digit is true then break else make it true and continue to iterate through all 
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else 
        printf("No repeated digit\n");

    return 0;

}