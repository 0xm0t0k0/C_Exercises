/*Read a n-length of characters and store them in an array*/
//Revised to use pointers to keep track of current position in array

#include <stdio.h>
#define N 150

int main(void)
{
    int ch, i = 0;

    char str[N];

    printf("Enter the characters\n");
    char *p = str;

    //Read until newline or buffer full
    do 
    {
        ch = getchar();
        *p = ch;
            p++;

    } while (ch != '\n' && p < str + N - 1);

    *p = '\0';

    printf("Entered characters are: %s\n", str); //str is a pointer to &str[0], chapter 12 on c a modern approach

    p--; //We use the pointer position to reverse it

    for (p; p >= str; p--)
    {
        printf("%c", *p);
    }
}
