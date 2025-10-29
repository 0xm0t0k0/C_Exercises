//Implementing a stack data structure (Chapter 10.2 C a Modern Approach)

#include <stdio.h>

#include <stdbool.h>

#define STACK_SIZE 100;

//external variables 
int contents[STACK_SIZE];
int *top_ptr; //initialize the pointer

void make_empty(void)
{
    top_ptr = contents; // Or &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0]; //if top ptr is at contents[0] its empty
}

bool is_full(void)
{
    return top_ptr == &contents[STACK_SIZE]; //or could I write it as contents + STACK SIZE
}

void push (int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_overflow();
    else
        return contents[--top];
}
int main(void)
{


}