/*Read a n-length of characters and store them in an array*/

#include <stdio.h>
#define N 150

int main(void)
{
    int ch, i = 0;

    char str[N];

    printf("Enter the characters\n");

    //Read until newline or buffer full
    do 
    {
        ch = getchar();
        str[i++] = ch;

    } while (ch != '\n' && i < N - 1);

    str[i] = '\0';

    printf("Entered characters are: %s\n", str); //str is a pointer to &str[0], chapter 12 on c a modern approach



    for (i; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

//TODO : Rewrite this to use a pointer instead of an integer to keep track of current position in the array