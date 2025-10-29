/*Ask a user to guess a hidden number*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100


void initialize_number_generator(void);
int new_secret_number(void); //changed here 
void read_guesses(int secret_number); //changed here

int main(void)
{
    char command;
    int secret_number; //initialization here

    printf("Guess the secret number between 1 and %d. \n\n", MAX_NUMBER);
    initialize_number_generator();
    do
    {
        secret_number = new_secret_number(); //assignment here with the value returned by the function
        printf("A new number has been chosen. \n");
        read_guesses(secret number); //here
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    } while (command == 'Y' || command == 'y');

    return 0;
}

//Initializes random number generator using the time of day.
void initialize_number_generator(void)
{
    srand((unsigned) time(NULL));
}

//Randomly returns a number between 1 and max and store it in secret_number

int new_secret_number(void)
{
    return rand() % MAX_NUMBER + 1; //here
}

//Repeatedly reads user guesses and tells the user whether each guess is too low, too high or correct. 
//When guess is correct , prints total number of guesses and returns

void read_guesses(int secret_number) //here
{
    int guess, num_guesses = 0;

    for (;;) {
        num_guesses++;
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess == secret_number) {
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        } else if (guess < secret_number)
            printf("Too low; try again. \n");
        else
            printf("Too high; try again. \n");
    }
}
