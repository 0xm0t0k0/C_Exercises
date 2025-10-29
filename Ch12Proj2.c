/*Chapter 12 Project 2*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 150

//Write a program that reads a message, then checks whether its a palindrome

int main(void)
{
    char str[N];
    int ch, i = 0;
    bool palindrome = true;

    while (i < N - 1 && (ch = getchar()) != '\n') //Buffer overflow protection + discard newline char
    {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            str[i++] = ch;
    }

    str[i] = '\0'; //Signify end of the string at i

    //Reversed string should start from i-1

    int len = i - 1;

    char new[len];

    for (int j = 0; j < i; j++)
    {
        new[j] = str[len--];
    }

    for (j = 0; j < i; j++)
    {
        if (new[j] != str[j])
        {

        }
    }

    if (palindrome)
        printf("Palindrome.\0");
    else
        printf("Not Palindrome.\0");


}

/*TODO : It is not correct yet I have to do it again.*/