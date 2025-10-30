//Read a message then check if its a palindrome
//Chapter 12 Project 2 Revised with pointers to keep track of array positions
#include <stdio.h>
#include <ctype.h>

#define N 150

int main(void)
{
    int ch;
    char str[150];
    char *p = str;
    int length = 0;
    bool palindrome = true;

    //Get input and sanitize it to contain only characters

    while (p < str + N && (ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z'){
            *p = ch;
            length++;
        }
        
        p++;
        
    }

    *p = '\0';
    p--;
    char new[length];
    char *q = new;

    for (q; q < new + length; q++)
    {
        *q = *p;
        p--;
    }

    *q = '\0';
    q = new;

    for (p = str; p < str + length; p++)
    {
        if (*p != *q)
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome = true)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;

}