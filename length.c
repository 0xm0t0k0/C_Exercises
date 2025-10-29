/*Determines the length of a message*/

#include <stdio.h>

int main(void){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar(); //Get the first character 
    while (ch != '\n') { //Now checks if the character is equal to newline
        len++; //If it is not it adds 1 to the length of the message
        ch = getchar(); //Gets the next char
    }
    printf("Your message was %d character(s) long.\n", len);
    
    return 0;
}

/*The while loop  can also be concatenated into while ( getchar() != 'n' )*/