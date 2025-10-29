#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define n 26 //Number of letters in english alphabet

//Write a program that checks if two words are anagrams

int main(void){
    
    //create array of size 26 
    int array[n] = {0};
    char ch;
    int x;
    bool anagram;

    printf("Enter first word: ");
    ch = getchar();

    while (ch != '\n')
    {
        if (isalpha(ch))
        {
            x = toupper(ch) - 64;
            array[x] += 1;                        
        }
        ch = getchar();
    }

    printf("Enter second word: ");
    
    ch = getchar();
    while (ch != '\n')
    {
        if (isalpha(ch))
        {
            x = toupper(ch) - 64;
            array[x] -= 1;
        }
        ch = getchar();
    }

    anagram = true;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            anagram = false;
            break;
        }
    }

    if (anagram == true) {
        printf("Words are anagrams\n");
    }
    else if (anagram == false) {
        printf("Words are not anagrams\n");
    }

    return 0;
}